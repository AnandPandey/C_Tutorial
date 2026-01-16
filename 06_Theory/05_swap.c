#include <stdio.h>

void swap(int*, int*);

void swap(int*a, int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    printf("Swap two numbers using pointers:\n");
    int x=5;
    int y=10;
    printf("Before swapping: x=%d, y=%d\n", x, y);
    swap(&x,&y);   
    printf("After swapping: x=%d, y=%d\n", x, y);
    return 0;
}