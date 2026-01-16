#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if (n==1){
        return 1;
    
    }else{
        return n+sum_natural(n-1);
    }
}
int main() {
    printf("The sum of first %d natural numbers is %d\n", 5, sum_natural(5));
    return 0;
}