#include <stdio.h>

void pattern(int);

void pattern(int n){
    if (n==0)
        return;
    pattern(n-1);
    if (n%2!=0){
        for (int i=0; i<n; i++){
            printf("* ");
        }
        printf("\n");
        printf("\n");
    }   
   
}
int main() {
    printf("pattern of %d lines is: \n", 5);
    printf(" \n");
    pattern(5);
    return 0;
}