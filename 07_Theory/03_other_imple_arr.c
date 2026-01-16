#include <stdio.h>
int main() {
    int cgpa[3]={9,8,8};
    float marks[]={33,40};
    for (int i=0; i<3; i++){
        printf("The value of elements at index %d is %d\n", i, cgpa[i]);
    }
    return 0;
}