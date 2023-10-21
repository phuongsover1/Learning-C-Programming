#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* createArray(unsigned int size) {
    return (int *)malloc(sizeof(int) * size);
}

void initArray(int *arr, unsigned int size) {
    if (arr != NULL) {
       int i; 
       for (i = 0; i < size; i++) {
        printf("Enter value for arr[%d] = ", i);
        scanf("%d", &arr[i]);
       }
    }
}

void displayArray(int *arr, unsigned int size) {
    if (arr != NULL) {
        int i;
        for (i = 0; i < size; i++) {
            printf("arr[%d] = %d\n", i, arr[i]);
        }
    }
}

int doubleArraySize(int **ptrArr, unsigned int size) {
    int *temp = (int *)realloc(*ptrArr, sizeof(int) * 2 * size);
    if (temp == NULL) {
        return -1;
    }
    *ptrArr = temp;
    memset(&((*ptrArr)[size]), 0, sizeof(int) * size);
    return size * 2;

}
void freeMemory(void **ptr) {
    free(*ptr);
    *ptr = NULL;
}

int main(void) {
    int size = 5;
    int *arr = createArray(size);
    initArray(arr, size);
    puts("Display Arr 1 time");
    displayArray(arr, size);
    size = doubleArraySize(&arr, size);
    if (size == -1) {
        puts("Failed to reallocate memory");
        free(arr);
        exit(EXIT_FAILURE);
    }
    puts("Display Arr 2 time");
    displayArray(arr, size);
    freeMemory(&arr);
    return 0;
}