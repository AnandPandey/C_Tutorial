#include <stdio.h>
int main() {
    int n=8, sum=0;
    for (int i=1; i<=10; i++)
{
    sum+=n*i;
}   
    printf("The sum of first 10 multiples of %d is %d\n", n, sum);   
    return 0;
}