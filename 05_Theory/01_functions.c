#include <stdio.h>
int a=5, b=10;
int sum(int a, int b);
int main() {
    printf("The sum of %d and %d is %d\n", a,b, sum(a,b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}