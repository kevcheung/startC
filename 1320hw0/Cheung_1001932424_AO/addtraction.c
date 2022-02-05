#include <stdio.h>
#define size 8

int addtraction(float a[], float b[], int s){
    int total = 0;
    for(int i = 0; i < size; i++){
        if(i % 2 == 0){
            total = (int)(total + (a[i] + b[i]));
        }else{
            total = (int)(total - (a[i] + b[i]));
        }
    }
    printf("The total is %d\n", total);
	return 0;
}

int main (void){
    float array1[size] = {0};
    float array2[size] = {0};
    printf("Enter %d numbers for the first array: \n", size);
    for(int j = 0; j < size; j++){
        scanf("%f", &array1[j]);
    }
    printf("Enter %d numbers for the second array: \n", size);
    for(int l = 0; l < size; l++){
        scanf("%f", &array2[l]);
    }
	addtraction(array1, array2, size);
	return 0;
}