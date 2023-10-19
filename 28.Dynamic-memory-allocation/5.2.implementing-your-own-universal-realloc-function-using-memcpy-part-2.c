#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *myRealloc(void *sourceBlock, unsigned int oldSize, unsigned int newSize);
void *createArray(unsigned int totalSize);
void printIntArray(int *arr, unsigned int size);
void assignValueFromIndexToIndex(int *arr, unsigned int fromIndex, unsigned int toIndex);

int main(void)
{
    unsigned int oldSize;
    unsigned int newSize;
    int *arr = NULL;
    int *temp = NULL;

    printf("Enter size: ");
    scanf("%d", &oldSize);

    arr = createArray(sizeof(int) * oldSize);

    if (arr == NULL)
    {
        puts("Failed to malloc arr");
        exit(EXIT_FAILURE);
    }
    assignValueFromIndexToIndex(arr, 0, oldSize - 1);
    printIntArray(arr, oldSize);
    puts("=== Extend size ===");
    printf("Enter new size: ");
    scanf("%d", &newSize);

    temp = (int *)myRealloc(arr, oldSize * sizeof(int), newSize * sizeof(int));
    if (temp == NULL)
    {
        printf("Failed to reallocate\n");
        free(arr);
        exit(EXIT_FAILURE);
    }
    arr = temp;
    assignValueFromIndexToIndex(arr, oldSize, newSize - 1);
    oldSize = newSize;
    printIntArray(arr, oldSize);

    puts("=== Shrink size ===");
    printf("Enter new size: ");
    scanf("%d", &newSize);
    temp = (int *)myRealloc(arr, oldSize * sizeof(int), newSize * sizeof(int));
    if (temp == NULL)
    {
        printf("Failed to reallocate\n");
        free(arr);
        exit(EXIT_FAILURE);
    }
    arr = temp;
    oldSize = newSize;

    printIntArray(arr, oldSize);

    free(arr);
    return 0;
}

void *createArray(unsigned int totalSize)
{
    return malloc(totalSize);
}

void printIntArray(int *arr, unsigned int size)
{
    while (size > 0)
    {
        printf("%d ", *arr);
        arr++;
        size--;
    }
    printf("\n");
}

void *myRealloc(void *sourceBlock, unsigned int oldSize, unsigned int newSize)
{
    void *returnedArr = malloc(newSize);
    if (returnedArr != NULL)
    {
        memcpy(returnedArr, sourceBlock, oldSize);
        free(sourceBlock);
    }
    return returnedArr;
}

void assignValueFromIndexToIndex(int *arr, unsigned int fromIndex, unsigned int toIndex)
{
    for (int i = fromIndex; i <= toIndex; i++)
    {
        printf("Enter value arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}