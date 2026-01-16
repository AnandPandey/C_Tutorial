#include <stdio.h>
int main() {
    int i=72;
    int*j=&i;
    printf("The address of i is %p", &i);
    printf("\nThe address of i using pointer j is %p", j);


    printf("\nThe value of i at address j is %d\n", *j);
    printf("The value of i  %d\n", *(&i));
    printf("The address of j is %p\n", &j);
    printf("The value of j is %p\n", *(&j));
    return 0;
}

// & is address of operator
// * is dereference operator
// %p is format specifier for pointer address
// A pointer is a variable that stores the address of another variable
// Pointer variable is declared using * before its name
// Example: int *p; // p is a pointer to an integer variable
// Example: float *f; // f is a pointer to a float variable
// Example: char *c; // c is a pointer to a char variable