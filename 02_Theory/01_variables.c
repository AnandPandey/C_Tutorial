#include <stdio.h>
int main() 
{
    int i =10;
    int j=i;

    // %d is a format specifier used for integers
    // It tells printf to expect an integer argument
    //%d is for signed decimal integers
    //%d is for int, %f is for float, %c is for char, %s is for string
    printf("Value of i is %d and value of j is %d", i,j);
    return 0;
}