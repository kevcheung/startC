#include <stdio.h>
#include <string.h>
#define NUM_SIZE 32
#define RANGE_SIZE 2

int find_numbers(int arr1[], int arr2[], int s){
	for(int k = 0; k < s; k++){
		if(arr1[k] >= arr2[0] && arr1[k] <= arr2[1]){
			printf("(%d, %d)\n", k, arr1[k]);
		};
	};
};

int main() {
	int num[NUM_SIZE] = {0};
	int range[RANGE_SIZE] = {0};
	int newSize = 0;
	printf("Enter your numbers (MAX 32):\n");
	for(int i = 0; i < NUM_SIZE; i++){
		int result = scanf("%d", &num[i]);
		if(result == 0){
			getchar();
			newSize = i;
			break;
		}else{
			continue;
		};
	};
	printf("Enter a range:\n");
	for(int l = 0; l < RANGE_SIZE; l++){
		scanf("%d", &range[l]);
	};
	while(range[0] > range[1]){
        printf("Your range is invalid! Enter a new range:\n");
        for(int p = 0; p < RANGE_SIZE; p++){
            scanf("%d", &range[p]);
	};
	find_numbers(num, range, newSize);
}