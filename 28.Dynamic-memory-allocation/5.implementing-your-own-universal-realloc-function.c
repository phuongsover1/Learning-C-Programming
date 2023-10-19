#include <stdio.h>
#include <stdlib.h>

// Develop your special "realloc" function
// The function should have the following signature:

// void* myRealloc(void *srcblock, unsigned int oldsize, unsigned int newSize);

// The function should implement a GENERAL / UNIVERSAL reallocation functionality
// (without using the realloc function ...)

void *myRealloc(void *srcblock, unsigned int oldSize, unsigned int newSize);

void printArr(int *arr, int size);

int main(void)
{
    int i;
    int *arr = (int *)malloc(4 * sizeof(int));
    for (i = 0; i < 4; i++ )  {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
    printf("Print array arr: \n");
    printArr(arr, 4);

    int *temp = (int *)myRealloc(arr, sizeof(int) * 4, sizeof(int) * 5);
    if (temp == NULL) {
        printf("Failed to reallocate\n");
        free(arr);
        exit(EXIT_FAILURE);
    }
    arr = temp;
    arr[4] = 12;
    printf("Print array arr: \n");
    printArr(arr, 5);

    temp = (int *)myRealloc(arr,5 * sizeof(int), 3 * sizeof(int));
    if (temp == NULL) {
        printf("Failed to reallocate\n");
        free(arr);
        exit(EXIT_FAILURE);
    }
    arr = temp;
    printArr(arr, 3);
    free(arr);
    return 0;
}

void *myRealloc(void *srcblock, unsigned int oldSize, unsigned int newSize)
{
    char *temp = (char *)malloc(newSize);
    if (temp != NULL) {
        for (int i = 0; i < oldSize; i++) {
        temp[i] = ((char *)srcblock)[i];
        }
        free(srcblock);
    }
    return temp;
}

void printArr(int *arr, int size)
{
    puts("Print Arr: ");
    while (size > 0)
    {
        printf("%d ", *arr);
        size--;
        arr++;
    }
    printf("\n");
}