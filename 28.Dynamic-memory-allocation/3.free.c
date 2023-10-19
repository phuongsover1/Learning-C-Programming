#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // 5 Common Errors with using 'free' function
    
    // 1.
    // int a[10];
    // free(a);

    // 2.
    // int *a;
    // free(a);

    // 3.
    // int *a;
    // a = (int *) malloc(sizeof(int) * 5);
    // free(a);
    // free(a);

    // 4.
    // int *a;
    // a = (int *)malloc(sizeof(int) * 5);
    // free(a+1);
    return 0;
}