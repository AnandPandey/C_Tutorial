#include <stdio.h>
int main() {
    int age=5;
    if (age>10){
        printf("We are inside if block\n");
        printf("Your age is greater than 10");
    }

    else if (age==10){
        printf("We are inside else if block\n");
        printf("Your age is equal to 10");
    }

    else if (age%5==0){
        printf("We are inside another else if block\n");
        printf("Your age is multiple of 5");
    }
    else{
        printf("We are inside else block\n");
        printf("Your age is less than 10");
    }
    return 0;
}