#include <stdio.h>
#include <stdlib.h>

void createArray(void **ptrToNewArr, unsigned int size);
void printArr(int *arr, int size);
int main(void) {
    int size; 
    int *arr = NULL;
    printf("Enter size: ");
    scanf("%d", &size);

    createArray(&arr,size * sizeof(int));
    if (arr == NULL) {
        printf("Failed to malloc()\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; i++)  {
        printf("Enter arr[%d] =", i);
        scanf("%d", &arr[i]);
    }

    printArr(arr, size);
    free(arr);
    return 0;
}
void createArray(void **ptrToNewArr, unsigned int totalSize) {
    *ptrToNewArr = malloc(totalSize);
}
void printArr(int *arr, int size)
{
    while (size > 0)
    {
        printf("%d ", *arr);
        arr++;
        size--;
    }
    putchar('\n');
}