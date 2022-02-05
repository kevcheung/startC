#include <stdio.h>
#define SIZE 100

void convert_base(long int bten){
	// printf("%x", bten);
	long int quo = 0;
	int index = 1, remain = 0;
	char hex[SIZE];

	quo = bten;

	while(quo != 0){
		remain = quo % 16;
		if(remain < 10){
			remain = remain + 48;
		}else{
			remain = remain + 55;
		}
		hex[index++] = remain;
		quo = quo / 16;
	}

	for(int i = index - 1; i > 0; i--){
		printf("%c", hex[i]);
	}
	puts("");
}

int main(){
	long int baseTen = 0;
	printf("Enter an integer:\n");
	scanf("%ld", &baseTen);
	// int result = scanf("%d", &baseTen[p]);
	char str1[SIZE];
	char str2[SIZE];
	// printf("%ld\n", baseTen);
	int testChar = getchar(); //RETURNS EITHER INT OF 10(LINE FEED) OR INT EQUAL TO OR MORE THAN 97(LETTERS STARTING WITH "a")

	// printf("INT IS %d\n", testChar);
	// printf("CHAR IS %c\n", testChar);
	if(testChar != 10){ //TESTS IF THE ENDING RESULT OF SCANF IS A LINE FEED OR LETTER
	// 	printf("VALID!");
	// }else{
		printf("INVALID INPUT");
		puts("");
		exit(0);
	}

	// printf("\nHIT %ld\n", baseTen);

	convert_base(baseTen);
}