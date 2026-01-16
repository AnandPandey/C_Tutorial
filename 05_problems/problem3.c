#include <stdio.h>

int fibonacci(int);

int fibonacci(int n){
    if (n==0 ||n==1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);

    
}
int main() {
    printf("Fibonacci of 7 is %d\n", fibonacci(7));
    return 0;
}