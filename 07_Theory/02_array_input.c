#include <stdio.h>
int main() {
    int marks1,marks2;
    printf("Enter marks1: ");
    scanf("%d",&marks1);
    printf("Enter marks2: ");
    scanf("%d",&marks2);
    int marks[2];
    marks[0]=marks1;
    marks[1]=marks2;
    printf("The marks are %d and %d\n", marks[0],marks[1]);
    return 0;
}