#include <stdio.h>
#include <stddef.h>

int main(void) {
    char c = 'A';
    int i = 100;
    float f = 3.14f;
    double d = 3.14159;
    long l = 100000L;

    char *pc = &c;
    int *pi = &i;
    float *pf = &f;
    double *pd = &d;
    long *pl = &l;


    printf("address of c = %p\n", (void*)&c);
    printf("address of c+1 = %p\n", (void*)(pc + 1));
    printf("value at address c+1 = %d\n", *(pc + 1));
    printf("address of i = %p\n", (void*)&i);
    printf("address of i+1 = %p\n", (void*)(pi + 1));
    printf("value at address i+1 = %d\n", *(pi + 1));
    printf("address of f = %p\n", (void*)&f);
    printf("address of f+1 = %p\n", (void*)(pf + 1));
    printf("value at address f+1 = %f\n", *(pf + 1));
    printf("address of d = %p\n", (void*)&d);
    printf("address of d+1 = %p\n", (void*)(pd + 1));
    printf("value at address d+1 = %lf\n", *(pd + 1));
    printf("address of l = %p\n", (void*)&l);
    printf("address of l+1 = %p\n", (void*)(pl + 1));
    printf("value at address l+1 = %ld\n", *(pl + 1));   

    return 0;

}
