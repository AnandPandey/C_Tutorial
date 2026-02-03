#include <stdio.h>

int main() {

    char arrc[2] = {'a','b'};
    int arri[2] = {10,20};
    float arrf[2] = {2.5f, 7.5f};
    double arrd[2] = {3.14, 6.28};
    long arrl[2] = {123456, 654321};

    char *pc = arrc;
    int *pi = arri;
    float *pf = arrf;
    double *pd = arrd;
    long *pli = arrl;

    printf("pc= %p\n", (void*)pc);
    printf("pc+1= %p\n", (void*)(pc+1));
    printf("*(pc+1)= %c\n\n", *(pc+1));

    printf("pi= %p\n", (void*)pi);
    printf("pi+1= %p\n", (void*)(pi+1));
    printf("*(pi+1)= %d\n\n", *(pi+1));

    printf("pf= %p\n", (void*)pf);
    printf("pf+1= %p\n", (void*)(pf+1));
    printf("*(pf+1)= %f\n\n", *(pf+1));

    printf("pd= %p\n", (void*)pd);
    printf("pd+1= %p\n", (void*)(pd+1));
    printf("*(pd+1)= %lf\n\n", *(pd+1));

    printf("pli= %p\n", (void*)pli);
    printf("pli+1= %p\n", (void*)(pli+1));
    printf("*(pli+1)= %ld\n", *(pli+1));

    return 0;
}
