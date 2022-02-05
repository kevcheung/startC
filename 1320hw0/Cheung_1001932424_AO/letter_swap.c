#include <stdio.h>
#include <string.h>
#define size 64

int main (void){
    char str[size] = {0};
	int index1, index2 = 0;
	char temp = {0};

	printf("Enter a string (up to %d characters): ", size);
	fgets(str, size, stdin);
	printf("Enter index 1: ");
	scanf("%d", &index1);
	printf("Enter index 2: ");
	scanf("%d", &index2);
	
	if(index1 > strlen(str) - 2 || index2 > strlen(str) - 2){
		printf("One or more of your indices are not valid!\n");
		return 0;
	}

	temp = str[index1];
	str[index1] = str[index2];
	str[index2] = temp;

	printf("%s", str);
    return 0;
}