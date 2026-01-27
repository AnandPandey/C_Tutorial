#include <stdio.h>
int main() {
    int num= 19;
    if ((num&1)==0){
        printf("%d is even",num);
    }else{
        printf("%d is odd",num);
    }

    return 0;
}