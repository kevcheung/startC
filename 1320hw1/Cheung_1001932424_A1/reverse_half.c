#include <stdio.h>
#include <string.h>
#define SIZE 64
int main(){
	char input[SIZE] = {0};
	int mid = 0;

	printf("Enter a string:\n");
	fgets(input, SIZE, stdin);
	mid = (strlen(input) - 1)/2;
	for(int i = mid; i >= 0; i--){
		printf("%c", input[i]);
	}
	for(int l = mid + 1; l < strlen(input); l++){
		printf("%c", input[l]);
	}
}