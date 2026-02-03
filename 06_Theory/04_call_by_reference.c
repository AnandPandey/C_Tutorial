#include <stdio.h>

int sum(int*,int*);

int sum(int* a, int* b){ 
    *a=*a+1;  
    *b=*b+1;   
    return *a+*b;
}
int main() {
    int x=4;
    int y=5;
    printf("The sum of 4 and 5 is %d\n", sum(&x,&y));
    printf("The value of x is %d and value of y is %d\n", x, y);
    return 0;
}