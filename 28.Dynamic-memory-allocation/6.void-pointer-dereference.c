 // C program to demonstrate the usage
// of a void pointer to perform pointer
// arithmetic and access a specific memory location

#include <stdio.h>

int main()
{
	// Declare and initialize an integer array 'a' with two
	// elements
	int a[2] = { 1, 2 };
	// Declare a void pointer and assign the address of
	// array 'a' to it
	void* ptr = &a;

	// Increment the pointer by the size of an integer
	ptr = ptr + sizeof(int);

	// The void pointer 'ptr' is cast to an integer
	// pointer using '(int*)ptr' Then, the value is
	// dereferenced with `*(int*)ptr` to get the value at
	// that memory location
	printf("%d", *(int*)ptr);

	return 0;
}
