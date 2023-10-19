// TASK: Write a function that creates and fills with values a dynamic array.
//      The size of the array is UNKNOWN in advance.
//      What's known is that once we read a value of "-1" , the function should stop
//      reading inputs from the user, and it should return the array
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void printArr(int *arr, int size);

int main(void) {
    int size = 0;
    int userInput;
    int *arr = NULL;
    int *temp = NULL;
    do {
        printf("Enter value: ");
        scanf("%d", &userInput);
        if (userInput == -1) 
            break;
        ++size;
        if (size == 1)  {
            arr = (int *)malloc(sizeof(int));
            if (arr == NULL) {
                puts("Failed to malloc()");
                exit(EXIT_FAILURE);
            }
            *arr = userInput;
        } else {
            temp = (int *)realloc(arr, size * sizeof(int));
            if (temp == NULL) {
                puts("Failed to realloc()");
                free(arr);
                exit(EXIT_FAILURE);
            }
            arr = temp;
            arr[size - 1] = userInput;
        }
    }while(1);
    printArr(arr, size);
    free(arr);
    return 0;
}

void printArr(int *arr, int size) {
    while (size > 0) {
        printf("%d ", *arr);
        arr++;
        size--;
    }
    putchar('\n');
}
