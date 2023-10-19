// TASK: Write a function that creates and fills with values a dynamic array.
//      The size of the array is UNKNOWN in advance.
//      What's known is that once we read a value of "-1" , the function should stop
//      reading inputs from the user, and it should return the array

// Reallocate when newSize =  actual size
// After exiting loop, then resize actualSize = newSize;
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// When new size = actual size then reallocate -> new actual size = actual size + SIZE_INCREMENT
#define SIZE_INCREMENT 5

void printArr(int *arr, int size);

int main(void)
{
    int size = 0;
    int userInput;
    int *arr = NULL;
    int *temp = NULL;
    int actualSize = SIZE_INCREMENT;
    do
    {
        printf("Enter value: ");
        scanf("%d", &userInput);
        if (userInput == -1)
            break;
        ++size;
        if (size == 1)
        {
            arr = (int *)malloc(sizeof(int) * actualSize);
            if (arr == NULL)
            {
                puts("Failed to malloc()");
                exit(EXIT_FAILURE);
            }
            *arr = userInput;
        }
        else
        {
            if (size == actualSize)
            {
                actualSize += SIZE_INCREMENT;
                temp = (int *)realloc(arr, actualSize * sizeof(int));
                if (temp == NULL)
                {
                    puts("Failed to realloc()");
                    free(arr);
                    exit(EXIT_FAILURE);
                }
                arr = temp;
            }
            arr[size - 1] = userInput;
        }
    } while (1);
    
    // After exiting loop, then resize actualSize = newSize if (newSize < actualSize);
    if (size < actualSize)
    {
        temp = (int *)realloc(arr, size * sizeof(int));
        if (temp == NULL)
        {
            puts("Failed to realloc()");
            free(arr);
            exit(EXIT_FAILURE);
        }
        arr = temp;
    }

    printArr(arr, size);
    free(arr);
    return 0;
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
