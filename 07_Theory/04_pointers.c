#include <stdio.h>
int main() {
    int i =32;
    int* a= &i;
    printf("The value of a before incrementing is %d\n", a);
    a++;
    printf("The value of a after incrementing is %d\n", a);
    

    char j='A';
    char* b= &j;
    printf("The value of b before incrementing is %d\n", b);
    b++;
    printf("The value of b after incrementing is %d\n", b);


    float k= 1.7;
    float* c = &k;
    printf("The value of c before incrementing is %d\n", c);
    c++;
    printf("The value of c after incrementing is %d\n", c);
    return 0;
}