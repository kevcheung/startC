#include <stdio.h>
#define MAX_SIZE 10

int insert(int value, int index, int arr[], int size) {
    if (index >= MAX_SIZE) {
        printf("[WARNING] Invalid index to insert.\n");
        return size;
    }

    // Append
    if (index == size) {
			*(arr + size) = value;
        // arr[size] = value;
        return size + 1;
    }

    if (index < size) {
        int i = size - 1;
        while (i >= index) {
					*(arr + i + 1) = *(arr + i);
            // arr[i+1] = arr[i];
            i--;
        }
				*(arr + index) = value;
        // arr[index] = value;
        return size + 1;
    }
    return 0;
};

int remove_val(int index, int arr[], int size) {
    for (int i = index; i < size - 1; i++) {
			*(arr + i) = *(arr + i + 1);
        // arr[i] = arr[i+1];
    }
    return size - 1;
};