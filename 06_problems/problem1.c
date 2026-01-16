#include <stdio.h>

void address(int );

void address(int p){
    printf("The address of the variable is: %p\n", &p);
    printf("The value of the variable is: %d\n", *(&p));
}
int main() {
    int x=5;
    address(x);
    return 0;
}