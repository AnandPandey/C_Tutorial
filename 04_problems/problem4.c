#include <stdio.h>
int main() {
    int n=8, fact=1;
    for (int i=n; i; i--)
{
    fact*=i;
}   
    printf("The factorial of %d is %d\n", n, fact);   
    return 0;
}