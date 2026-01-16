#include <stdio.h>
int main() {
    int i, flag=1;
    printf("Enter a number: ");
    scanf("%d",&i);
    if (i<=1){
        flag=0;
    }
    for (int j=2; j<=i/2; j++){
        if (i%j==0){
            flag=0;
            break;
        }
    }

    if (flag==0)
    printf("%d is not a prime number.\n", i);

    else(
    printf("%d is a prime number.\n", i)
    );
    
    return 0;
}