#include <stdio.h>

int factorial(int n);

int factorial(int n){
    if (n==0 || n==1){    //base case
        return 1;
    } else{
        return n*(factorial(n-1));  //recursive function call
    }
    
}
int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("The factorial of %d is %d\n", num, factorial(num));
    return 0;
}