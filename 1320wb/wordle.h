#ifndef WORDLE_H
#define WORDLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TRIES 6
#define BUF_SIZE 16

typedef struct{
    char **words;
    int num_words;
} wordlist_t;

wordlist_t load_words (char s[]);
void trim(char *str);
char* select_random_answer(wordlist_t *w);

#endif