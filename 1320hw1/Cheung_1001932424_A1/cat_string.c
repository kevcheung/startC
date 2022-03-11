#include <stdio.h>
#include <string.h>
#define SIZE 128

void cat_string(char s1[], char s2[]){
	int vow1 = 0;
	int vow2 = 0;
	int ind1 = 0;
	int ind2 = 0;
	char newSize = 0;
	newSize = (strlen(s1) - 1) + (strlen(s2) - 1);
	char concat[newSize];
	for(int i = 0; i < strlen(s1); i++){ //CHECKS IF VOWELS ARE ENCOUNTERED. IF SO THEN INCREASE COUNT
		if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] =='O' || s1[i] =='U'){
			vow1 = vow1 + 1;
		};
	};
	for(int l = 0; l < strlen(s2); l++){
		if(s2[l] == 'a' || s2[l] == 'e' || s2[l] == 'i' || s2[l] == 'o' || s2[l] == 'u' || s2[l] == 'A' || s2[l] == 'E' || s2[l] == 'I' || s2[l] == 'O' || s2[l] == 'U'){
			vow2 = vow2 + 1;
		};
	};
	// printf("%d\n", strlen(s1) - 1 - vow1);
	// printf("%d\n", strlen(s2) - 1 - vow2);

	// printf("%d\n", newSize);
	// for(int n = 0; n < 6; n++){
	// 	printf("s1[n] IS (%d, %d)\n", n, s1[n]);
	// 	printf("s2[n] IS (%d, %d)\n", n, s2[n]);
		
	// 	if(s1[n] == '\0'){
	// 		printf("s1 NULL IS %d\n", n);
	// 	}else if(s2[n] == '\0'){
	// 		printf("s2 NULL IS %d\n", n);
	// 	}
	// }

	if((strlen(s1) - 1 - vow1) > (strlen(s2) - 1 - vow2)){
		// printf("%s%s", s1, s2);
		while(s1[ind1] != '\0'){
			concat[ind2] = s1[ind1];
			ind1 = ind1 + 1;
			ind2 = ind2 + 1;
		};
		printf("%s has more", concat);
		ind1 = 0;
    while (s2[ind1] != '\0') {
      concat[ind2] = s2[ind1];
      ind1 = ind1 + 1;
			ind2 = ind2 + 1;
    };
		concat[ind2] = '\0';
	}else{
		// printf("%s%s", s2, s1);
		while(s2[ind1] != '\0'){
			concat[ind2] = s2[ind1];
			ind1 = ind1 + 1;
			ind2 = ind2 + 1;
		};
		printf("%s has more", concat);
		ind1 = 0;
    while (s1[ind1] != '\0') {
      concat[ind2] = s1[ind1];
      ind1 = ind1 + 1;
			ind2 = ind2 + 1;
    };
		concat[ind2] = '\0';
	};
	printf("\nConcatenated string: %s", concat);
};

int main(){
	char str1[SIZE] = {0};
	char str2[SIZE] = {0};
	// int testChar = getchar();
	// char newSize = 0;
	printf("Enter first string: ");
	scanf("%[^\n]%*c", str1); //REGEX METHOD OF READING TILL NEW LINE OR EOF IS ENCOUNTERED
	// fgets(str1, SIZE, stdin);
	printf("Enter second string: ");
	// fgets(str2, SIZE, stdin);
	scanf("%[^\n]%*c", str2);
	// newSize = strlen(str1) + strlen(str2);
	// printf("%d\n", newSize);
	// char concat[newSize];
	printf("%s\n", str1);
	printf("%s\n", str2);
	
	cat_string(str1, str2);
};