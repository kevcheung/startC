#include "wordle.h"

void trim(char *str){
    if(strlen(str) == 6){
        // printf("%d\n", strlen(str));
        str[strlen(str) - 1] = 0;
    }
}

wordlist_t load_words (char *s){
    FILE *fp = fopen(s, "r");
    wordlist_t temp = {0};

    if(!fp){
        return temp;
    }

    char word[BUF_SIZE] = {0};

    while(fgets(word, BUF_SIZE, fp)){
        trim(word);
        // printf("%c\n", word[strlen(word)]);
        temp.words = realloc(temp.words, sizeof(void *) * (temp.num_words + 1));
        temp.words[temp.num_words] = malloc(strlen(word) + 1);
        strcpy(temp.words[temp.num_words++], word);
    }
        // printf("%s\n", temp.words[12946][4]);

    fclose(fp);

    // for (int i = 0; i < temp.num_words; i++) {
    //     // printf("words[%d] = %s\n", i, temp.words[i]);
    //     printf("%s\n", temp.words[i]);
    // }

    return temp;
};

char* select_random_answer(wordlist_t *d){
    srand(time(NULL));
    char *temp = {0};
    // printf("HIT\n");
    temp = malloc(strlen(d->words[0]));
    strcpy(temp, d->words[rand() % d->num_words]);
    // printf("%s\n", temp);
    // printf("%s\n", d->words[rand() % d->num_words]);
    return temp;
    // return d->words[8742];
    // return d->words[8820];
};

int main (int argc, char **argv){
    char guess[6];
    wordlist_t data = {0};
    int num_tries = 0;
    int num_correct = 0;
    // char symbol[6] = {0};
    char symbol[5] = {'_', '_', '_', '_', '_'};
    int checked[5] = {0, 0, 0, 0, 0};

    if(argc != 2){
        return 1;
    }

    data = load_words(argv[1]);
    // select_random_answer(&data);
    char *answer = select_random_answer(&data);
    printf("ANSWER IS %s\n", answer);

    // while(num_tries < MAX_TRIES || num_correct < 5){
    while(num_tries < MAX_TRIES){
        // printf("num is %d, max is %d\n", num_tries, MAX_TRIES);
        // printf("num correct is %d\n", num_correct);
        // printf("%s\n", symbol);
        printf("Enter your guess (%d left): ", MAX_TRIES - num_tries);
        fgets(guess, MAX_TRIES, stdin);
        while(getchar() != '\n');
        printf("%s\n", guess);
        // for(int i = 0; i < 5; i++){
        //     for(int j = 0; j < 5; j++){
        //     // for(int j = 4; j >= 0; j--){
        //         // for(int k = 0; k < 5; k++){
        //             // printf("i is %d, j is %d\n", i, j);
        //             printf("guess[%d] is %c, answer[%d] is %c\n", i, guess[i], j, answer[j]);
        //             // if(guess[i] != answer[j] && symbol[j] == 0){
        //             //     symbol[j] = '_';
        //             //     printf("SYMBOL [ %d ] MATCH _\n", j);
        //             // }else if((guess[i] == answer[j] || answer[i] == guess[j]) && i == j){
        //             //     symbol[j] = '^';
        //             //     printf("SYMBOL [ %d ] MATCH ^\n", j);
        //             // }else if((guess[i] == answer[j] || answer[i] == guess[j]) && i != j){
        //             //     symbol[j] = '*';
        //             //     printf("SYMBOL [ %d ] MATCH *\n", j);
        //             // }

        //             if((guess[i] == answer[j] || answer[i] == guess[j]) && i == j){
        //                 symbol[j] = '^';
        //                 printf("SYMBOL [ %d ] MATCH ^\n", j);
        //             }else if((guess[i] == answer[j] || answer[i] == guess[j]) && i != j){
        //                 symbol[j] = '*';
        //                 printf("SYMBOL [ %d ] MATCH *\n", j);
        //             }

        //             // if(guess[i] != answer[j] && symbol[j] == 0){
        //             //     symbol[j] = '_';
        //             //     printf("SYMBOL [ %d ] MATCH _\n", j);
        //             // }else if((guess[i] == answer[j] || answer[i] == guess[j]) && i == j){
        //             //     symbol[j] = '^';
        //             //     printf("SYMBOL [ %d ] MATCH ^\n", j);
        //             // }else if((guess[i] == answer[j] || answer[i] == guess[j]) && i != j){
        //             //     symbol[j] = '*';
        //             //     printf("SYMBOL [ %d ] MATCH *\n", j);
        //             // }



        //             // if(guess[i] != answer[i] && symbol[j] == 0){
        //             //     symbol[j] = '_';
        //             //     printf("SYMBOL [ %d ] MATCH _\n", j);
        //             // }else if(guess[i] == answer[i] && i == j){
        //             //     symbol[j] = '^';
        //             //     printf("SYMBOL [ %d ] MATCH ^\n", j);
        //             // }else if(guess[i] == answer[i] && i != j){
        //             //     symbol[j] = '*';
        //             //     printf("SYMBOL [ %d ] MATCH *\n", j);
        //             // }



        //             // if(guess[i] != answer[j] && symbol[i] == 0){
        //             //     symbol[k] = '_';
        //             //     printf("MATCH _\n");
        //             // }else if(guess[i] == answer[j] && i == j){
        //             //     symbol[k] = '^';
        //             //     // printf("^");
        //             //     printf("MATCH ^\n");
        //             //     num_correct++;
        //             // }else if(guess[i] == answer[j] && i != j){
        //             //     symbol[k] = '*';
        //             //     printf("MATCH *\n");
        //             //     // printf("*");
        //             // }

        //         // }
        //     }
        // }
        // printf("BEFORE ^\n");
        for(int i = 0; i < 5; i++){
            if(guess[i] == answer[i]){
                symbol[i] = '^';
                checked[i] = 1;
            }
            // printf("%c", symbol[i]);
        }
        // printf("\nAFTER ^\n");
        for(int j = 0; j < 5; j++){
            if(symbol[j] != '^'){
                for(int k = 0; k < 5; k++){
                    // printf("GUESS IS %c, ANSWER IS %c\n", guess[j], answer[k]);
                    // printf("%d %d %d %d ", j, k, checked[j], checked[k]);
                    if(guess[j] == answer[k] && (checked[j] != 1 || checked[k] != 1)){
                        symbol[j] = '*';
                        checked[k] = 1;
                    }
                }
            }
            // printf("%c", symbol[j]);
        }
        // printf("\n");
        printf("%s\n", symbol);
        for(int l = 0; l < 5; l++){
            if(symbol[l] == '^'){
                num_correct++;
                // printf("NUM CORRECT IS %d\n", num_correct);
            }
            symbol[l] = '_';
            checked[l] = 0;
        }
        if(num_correct != 5){
            num_correct = 0;
        }else if(num_correct == 5){
            printf("You guessed correctly!\n");
            break;
        }
        // printf("NUM CORRECT IS %d\n", num_correct);
        num_tries++;
        if(num_tries == MAX_TRIES){
            printf("You ran out of attempts!\n");
        }
        // printf("\n");
    }
    // while(num_tries < MAX_TRIES){
    //     printf("Enter your guess (%d left):", MAX_TRIES - num_tries);
    //     fgets(guess, MAX_TRIES, stdin);
    //     while(getchar() != '\n');
    //     for(int i = 0; i < 6; i++){
    //         if(guess[i] == answer[i]){
    //             printf("%c", guess[i]);
    //             num_correct++;
    //         }else{
    //             printf("_");
    //         }
    //     }
    //     printf("\n");
    // }



    // FILE *fp = fopen(argv[1], "r");                                      //ORIGINAL GET WORD CODE

    // if(!fp){
    //     return 1;
    // }

    // char word[BUF_SIZE] = {0};
    // char **words = NULL;
    // int num_words = 0;
    // char answer[BUF_SIZE] = {0};

    // while(fgets(word, BUF_SIZE, fp)){
    //     word[strlen(word) - 1] = 0;
    //     words = realloc(words, sizeof(void *) * (num_words + 1));
    //     words[num_words] = malloc(strlen(word) + 1);
    //     strcpy(words[num_words++], word);
    //     // printf("HIT\n");
    // }

    // fclose(fp);

    // for (int i = 0; i < num_words; i++) {                                //PRINTING ALL VARIABLES
    //     printf("words[%d] = %s\n", i, words[i]);
    // }



    // printf("%s\n", words[rand() % num_words]);

    // strcpy(answer[BUF_SIZE], words[rand() % num_words]);
    // printf("%s\n", answer);



    // for (int i = 0; i < num_words; i++) {                                //FREE MEMORY
    //     free(words[i]);
    // }
    // free(words);
    for (int i = 0; i < data.num_words; i++) {
        free(data.words[i]);
    }
    free(data.words);

    return 0;
};
