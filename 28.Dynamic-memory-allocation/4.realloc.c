#include <stdio.h>
#include <stdlib.h>

void printGrades(int *arr, int size);
int main(void) {
    int i;
    int *grades = NULL;
    int *temp = NULL;
    int totalGrades;
    printf("Enter total grades: ");
    scanf("%d", &totalGrades);
    grades =  (int *)malloc(totalGrades * sizeof(int));
    if (grades == NULL) {
        printf("Failed to allocatate memory for grades\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < totalGrades; i++) {
        printf("Enter grades: ");
        scanf("%d", &grades[i]);
    }
    printGrades(grades, totalGrades);
    // Code ..
    totalGrades = totalGrades + 2;
    temp = (int *)realloc(grades, totalGrades * sizeof(int));
    if (temp == NULL) {
        printf("Failed to reallocate memory for grades\n");
        free(grades);
        exit(EXIT_FAILURE);
    }
    grades = temp;
    // Add more grades to array
    for (i = 2; i > 0; i--) {
        printf("Enter grades: ");
        scanf("%d", &grades[totalGrades - i]);
    }
    printGrades(grades, totalGrades);
    grades[totalGrades - 1] =  100;
    grades[totalGrades - 2] = 90;

    // Remove some grades from array
    totalGrades = totalGrades - 3;
    temp = (int *)realloc(grades, totalGrades * sizeof(int));
    if (temp == NULL) {
        printf("Failed to reallocate memory for grades\n");
        free(grades);
        exit(EXIT_FAILURE);
    }
    grades = temp;
    printGrades(grades, totalGrades);
    free(grades);
    return 0;
}

void printGrades(int *arr, int size) {
    puts("\nPrint grades: ");
    while(size > 0) {
        printf("%d ", *arr);
        arr++;
        size--;
    }
    printf("\n");
}