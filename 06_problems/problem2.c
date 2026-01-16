#include <stdio.h>

void returning_pointer(int*);

void returning_pointer(int* p){
    printf("The address at pointer p is: %p\n", p);
    printf("The value of pointer p is: %p\n", *(&p));
}
int main() {
    int a = 10;
    int *p = &a;
    returning_pointer(p);
    return 0;
}