/*SOLUTION 1 - START*/

/*#include <stdio.h>*/

/*void dotProduct(int a[], int b[], int n){*/
/*	int sum = 0;*/
/*	for(int i = 0; i < n; i++){*/
/*		sum += (a[i] * b[i]);*/
/*	}*/
/*	printf("\nThe dot product is: %d\n", sum);*/
/*}*/

/*void addElements(int a[], int n, char s[]){*/
/*	for(int i = 0; i < n; i++){*/
/*		if(i == 0){*/
/*			printf("Enter the first element for the %s array: ", s);*/
/*		}else if(i == n - 1){*/
/*			printf("Enter the last element: ");*/
/*		}else{*/
/*			printf("Enter the next element: ");*/
/*		}*/
/*		scanf("%d", &a[i]);*/
/*	}*/
/*}*/

/*void printArr(int a[], int n){*/
/*	for(int i = 0; i < n; i++){*/
/*		if(i == 0){*/
/*			printf("{%d, ", a[i]);*/
/*		}else if(i == n - 1){*/
/*			printf("%d}", a[i]);*/
/*		}else{*/
/*			printf("%d, ", a[i]);*/
/*		}*/
/*	}*/
/*}*/

/*int main(void) {*/
/*	int size;*/
/*	printf("Enter the dimensions of the array: ");*/
/*	scanf("%d", &size);*/
/*	int arr1[size], arr2[size];*/
/*	addElements(arr1, size, "first");*/
/*	addElements(arr2, size, "second");*/
/*	printf("For two one-dimesional array of size %d,\n\tint a[%d] = ", size, size);*/
/*	printArr(arr1, size);*/
/*	printf("; and int b[%d] = ", size);*/
/*	printArr(arr2, size);*/
/*	dotProduct(arr1, arr2, size);*/
/*}*/

/*SOLUTION 1 - END*/

/*SOLUTION 2 i - START*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int main(void){*/

/*	srand(time(NULL));*/
/*	int arr[4][4];*/
/*	for(int i = 0; i < 4; i++){*/
/*		for(int j = 0; j < 4; j++){*/
/*			if(i < j){*/
/*				arr[i][j] = 0;*/
/*			}else{*/
/*				arr[i][j] = 1 + rand() % 5;*/
/*			}*/
/*		}*/
/*	}*/
/*	for(int k = 0; k < 4; k++){*/
/*		for(int l = 0; l < 4; l++){*/
/*			printf("%d", arr[k][l]);*/
/*			if(l == 3){*/
/*				puts("");*/
/*			}*/
/*		}*/
/*	}*/
/*}*/

/*SOLUTION 2 i - END*/

/*SOLUTION 2 ii - START*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int main(void){*/

/*	srand(time(NULL));*/
/*	int arr[4][4];*/
/*	for(int i = 0; i < 4; i++){*/
/*		for(int j = 0; j < 4; j++){*/
/*			if(j < i){*/
/*				arr[i][j] = 0;*/
/*			}else{*/
/*				arr[i][j] = 1 + rand() % 5;*/
/*			}*/
/*		}*/
/*	}*/
/*	for(int k = 0; k < 4; k++){*/
/*		for(int l = 0; l < 4; l++){*/
/*			printf("%d", arr[k][l]);*/
/*			if(l == 3){*/
/*				puts("");*/
/*			}*/
/*		}*/
/*	}*/
/*}*/

/*SOLUTION 2 ii - END*/

/*SOLUTION 2 iii - START*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int main(void){*/

/*	srand(time(NULL));*/
/*	int arr[4][4];*/
/*	for(int i = 0; i < 4; i++){*/
/*		for(int j = 0; j < 4; j++){*/
/*			if(i != j){*/
/*				arr[i][j] = 0;*/
/*			}else{*/
/*				arr[i][j] = 1 + rand() % 5;*/
/*			}*/
/*		}*/
/*	}*/
/*	for(int k = 0; k < 4; k++){*/
/*		for(int l = 0; l < 4; l++){*/
/*			printf("%d", arr[k][l]);*/
/*			if(l == 3){*/
/*				puts("");*/
/*			}*/
/*		}*/
/*	}*/
/*}*/

/*SOLUTION 2 iii - END*/

/*SOLUTION 3 - START*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int main(void){*/
/*	int row = 0, col = 0;*/
/*	srand(time(NULL));*/
/*	printf("Enter the amount of rows: ");*/
/*	scanf("%d", &row);*/
/*	printf("Enter the amount of columns: ");*/
/*	scanf("%d", &col);*/
/*	int a[row][col], b[row][col], c[row][col];*/
/*	printf("The sum of the two randomized dimensional arrays is:\n");*/
/*	for(int i = 0; i < row; i++){*/
/*		for(int j = 0; j < col; j++){*/
/*			a[i][j] = 1 + rand() % 10;*/
/*			b[i][j] = 1 + rand() % 10;*/
/*			c[i][j] = a[i][j] + b[i][j];*/
/*			printf("%d\t", c[i][j]);*/
/*		}*/
/*		puts("");*/
/*	}*/
/*}*/

/*SOLUTION 3 - END*/

/*SOLUTION 4 - START*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*void initialize(int a[][10], int r){*/
/*	for(int i = 0; i < 10; i++){*/
/*		for(int j = 0; j < 10; j++){*/
/*			a[i][j] = 1 + rand() % r;*/
/*		}*/
/*	}*/
/*}*/

/*void maxMin(int a[][10]){*/
/*	int min = 0;*/
/*	int max = 0;*/
/*	printf("The initial randomized array is:\n");*/
/*	for(int i = 0; i < 10; i++){*/
/*		for(int j = 0; j < 10; j++){*/
/*			if(a[i][j] < min || min == 0){*/
/*				min = a[i][j];*/
/*			}*/
/*			if(a[i][j] > max || max == 0){*/
/*				max = a[i][j];*/
/*			}*/
/*			printf("%d\t", a[i][j]);*/
/*		}*/
/*	}*/
/*	printf("\nThe maximum value is %d and the minimum value is %d\n\n", max, min);*/
/*}*/

/*void distinct(int a[][10], int r){*/
/*	int distValues[r];*/
/*	int count = 0;*/
/*	for(int l = 0; l < r; l++){*/
/*		distValues[l] = 0;*/
/*	}*/
/*	for(int i = 0; i < 10; i++){*/
/*		for(int j = 0; j < 10; j++){*/
/*			distValues[a[i][j]]++;*/
/*		}*/
/*	}*/
/*	printf("The distinct values are:\n");*/
/*	for(int k = 0; k < r; k++){*/
/*		if(distValues[k] != 0){*/
/*			printf("%d\t", k);*/
/*		}*/
/*	}*/
/*	puts("");*/
/*}*/

/*int main(void){*/
/*	srand(time(NULL));*/
/*	int arr[10][10], random = 0;*/
/*    printf("Enter the greatest possible value: ");*/
/*	scanf("%d", &random);*/
/*	initialize(arr, random);*/
/*	maxMin(arr);*/
/*	distinct(arr, random);*/
/*}*/

/*SOLUTION 4 - END*/


/*SOLUTION 5 - START*/

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int rowCol(int *rPtr, int *cPtr, char s[]){*/
/*	printf("Enter the number of rows for the %s array: ", s);*/
/*	scanf("%d", rPtr);*/
/*	printf("Enter the number of columns for the %s array: ", s);*/
/*	scanf("%d", cPtr);*/
/*	return *rPtr;*/
/*	return *cPtr;*/
/*}*/

/*void randomize(int r, int c, int a[r][c], int m, char s[]){*/
/*	printf("The %s matrix is:\n", s);*/
/*	for(int i = 0; i < r; i++){*/
/*		for(int j = 0; j < c; j++){*/
/*			a[i][j] = 1 + rand() % m;*/
/*			if(j == c - 1){*/
/*				printf("%d\n", a[i][j]);*/
/*			}else{*/
/*				printf("%d\t", a[i][j]);*/
/*			}*/
/*		}*/
/*	}*/
/*}*/

/*void product(int r1, int c1, int c2, int a1[r1][c1], int a2[c1][c2], int a3[r1][c2]){*/
/*	int sum = 0;*/
/*	int element = 0;*/
/*	for(int i = 0; i < r1; i++){*/
/*		for(int j = 0; j < c1; j++){*/
/*			for(int k = 0; k < c2; k++){*/
/*					element = a1[i][j] * a2[j][k];*/
/*					sum += element;*/
/*					a3[i][k] += element;*/
/*					element = 0;*/
/*			}*/
/*		}*/
/*	}*/
/*	printf("\nThe resultant third matrix is:\n");*/
/*	for(int p = 0; p < r1; p++){*/
/*		for(int o = 0; o < c2; o++){*/
/*			printf("%d\t ", a3[p][o]);*/
/*			if(o == c2 - 1){*/
/*				puts("");*/
/*			}*/
/*		}*/
/*	}*/
/*}*/

/*int main(void){*/
/*	srand(time(NULL));*/
/*	int mod, row1 = 0, row2 = 0, col1 = 0, col2 = 0;*/
/*	printf("Enter the greatest possible value: ");*/
/*	scanf("%d", &mod);*/
/*	rowCol(&row1, &col1, "first");*/
/*	rowCol(&row2, &col2, "second");*/
/*	while(row2 == 0 || col1 == 0 || row2 != col1){*/
/*		printf("The column of the first array and row of the second array cannot be 0 or not equal. Please enter a new value for both.\nEnter the new number of columns in the first array: ");*/
/*		scanf("%d", &col1);*/
/*		printf("Enter the new number of rows in the second array: ");*/
/*		scanf("%d", &row2);*/
/*	}*/
/*	int arr1[row1][col1];*/
/*	int arr2[row2][col2];*/
/*	int arr3[row1][col2];*/
/*	for(int i = 0; i < row1; i++){*/
/*		for(int j = 0; j < col2; j++){*/
/*			arr3[i][j] = 0;*/
/*		}*/
/*	}*/
/*	randomize(row1, col1, arr1, mod, "first");*/
/*	randomize(row2, col2, arr2, mod, "second");*/
/*	product(row1, col1, col2, arr1, arr2, arr3);*/
/*}*/

/*SOLUTION 5 - END*/
