#include <stdio.h>
int main() {
    int i=6;
    int *k=&i;
    int **j=&k;

    printf("The address of i is %p\n", &i);
    printf("The address of i using pointer k is %p\n", k);
    printf("The address of i using pointer to pointer j is %p\n", *j);
    printf("The value of i at address k is %d\n", *k);
    printf("The value of i at address stored in pointer to pointer j is %d\n", **j);
    printf("The address of k is %p\n", &k);
    printf("The address of k using pointer to pointer j is %p\n", j);
    printf("The value of k is %p\n", *(&k));
    printf("The value of k using pointer to pointer j is %p\n", *j);
    printf("The value of j is %p\n", *(&j));
    printf("The value of j using pointer to pointer j is %p\n", j);
    printf("The value at address stored in j is %p\n", *j);
    printf("The address of j is %p\n", &j); 
    return 0;
}