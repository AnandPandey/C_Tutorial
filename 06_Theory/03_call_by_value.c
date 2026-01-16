#include <stdio.h>

int sum(int,int);

int sum(int a, int b){    // cannot modify the actual values of a and b because they are copies.
    return a+b;
}
int main() {
    printf("The sum of 4 and 5 is %d\n", sum(4,5));
    return 0;
}