//SOLUTION 1 - START

/*#include <stdio.h>*/

/*int main(void){*/
/*    int array[20];*/
/*    for(int i = 0; i < 20; i++){*/
/*        array[i] = i + (i + 3);*/
/*        printf("%d ", array[i]);*/
/*    }*/
/*    puts("");*/
/*}*/

//SOLUTION 1 - END

//SOLUTION 2 - START

/*#include <stdio.h>*/

/*int main(void){*/
/*    int array[20];*/
/*    for(int i = 0; i < 20; i++){*/
/*        array[i] = i + (i + 4);*/
/*        printf("%d ", array[i]);*/
/*    }*/
/*    puts("");*/
/*}*/

//SOLUTION 2 - END

//SOLUTION 3 - START

/*#include <stdio.h>*/

/*int main(void){*/
/*    int a[20] = {0};*/
/*    for(int i = 0; i < 20; i++){*/
/*        printf("%d ", a[i]);*/
/*    }*/
/*    puts("");*/
/*    for(int i = 0; i < 20; i++){*/
/*        a[i] = i;*/
/*        printf("%d ", a[i]);*/
/*    }*/
/*    puts("");*/
/*}*/

//SOLUTION 3 - END

//SOLUTION 4 - START

/*#include <stdio.h>*/

/*int compare(int array[], int n){*/
/*	printf("\n");*/
/*	for(int j = 0; j < n; j++){*/
/*		if(array[j] % 2 != 0){*/
/*			printf("The array element at a[%d] is %d and is an odd number\n", j, array[j]);*/
/*		}else{*/
/*			printf("The array element at a[%d] is %d and is an even number\n", j, array[j]);*/
/*		}*/
/*	}*/
/*	return 0;*/
/*}*/

/*int sum_array(int array[], int n){*/
/*	int sum;*/
/*	for(int i = 0; i < n; i++){*/
/*		array[i] = i + 1;*/
/*		sum += array[i];*/
/*	}*/
/*	printf("The sum of the elements of the array is : %d\n", sum);*/
/*	return 0;*/
/*}*/

/*int avg(int array[], int n){*/
/*	int sum;*/
/*	for(int i = 0; i < n; i++){*/
/*		array[i] = i + 1;*/
/*		sum += array[i];*/
/*	}*/
/*	printf("The average of the elements of the array is : %f\n", (float) sum/n);*/
/*	return 0;*/
/*}*/

/*int main(void){*/
/*	int length = 20;*/
/*	int a[length];*/
/*	for(int i = 0; i < length; i++){*/
/*		a[i] = i + 1;*/
/*		printf("%d ", a[i]);*/
/*	}*/
/*	compare(a, length);*/
/*	sum_array(a, length);*/
/*	avg(a, length);*/
/*}*/

//SOLUTION 4 - END

// SOLUTION 5 - START

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int print(int arr[], int iter, int n){*/
/*	if(iter == n){*/
/*			printf("%d", arr[iter]);*/
/*		}else{*/
/*			printf("%d, ", arr[iter]);*/
/*		}*/
/*		return 0;*/
/*};*/

/*int main(void){*/
/*	int a[20];*/
/*	srand(time(NULL));*/
/*	int even = 0;*/
/*	int odd = 0;*/
/*	int count = 0;*/
/*	int num;*/
/*	printf("Enter a number to check the array: \n");*/
/*	scanf("%d", &num);*/
/*	while(num < 1 || num > 50){*/
/*		printf("Your value is not between 1 and 50. Please input a new value: \n");*/
/*		scanf("%d", &num);*/
/*	}*/
/*	printf("The original array is: ");*/
/*	for(int i = 0; i < 20; i++){*/
/*		a[i] = 1 + rand() % 50;*/
/*		if(a[i] % 2 == 0){*/
/*			even++;*/
/*		}else{*/
/*			odd++;*/
/*		}*/
/*		print(a, i, 19);*/
/*	}*/
/*	printf("\nThe number of odd and even numbers in the array are %d, %d respectively\nThe original elements of the array are: ", odd, even);*/
/*	for(int i = 0; i < 20; i++){*/
/*		print(a, i, 19);*/
/*		if(a[i] == num && i == 19){*/
/*			count++;*/
/*			printf("\nThe number %d has appeared %d times.\n", num, count);*/
/*		}else if(count == 0 && i == 19){*/
/*			printf("\nThe number %d did not appear in the array.\n", num);*/
/*		}else if(a[i] == num){*/
/*			count++;*/
/*		}else if(i == 19){*/
/*			printf("\nThe number %d has appeared %d times.\n", num, count);*/
/*		}*/
/*	}*/
/*}*/

//SOLUTION 5 - END

//SOLUTION 6 - START

/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <time.h>*/

/*int main(void){*/
/*	srand(time(NULL));*/
/*	int head = 0;*/
/*	int tail = 0;*/
/*	int toss = 1000000;*/
/*	for(int i = 1; i <= toss; i++){*/
/*		float coin = rand() % 2;*/
/*		if(coin == 1){*/
/*			head++;*/
/*		}else if(coin == 0){*/
/*			tail++;*/
/*		}*/
/*	}*/
/*	printf("The coin was tossed %d times.\nThe Head appeared %d times and the Tail appeared %d times.\n ", toss, head, tail);*/
/*}*/

//SOLUTION 6 - END
