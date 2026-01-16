#include <stdio.h>
int main() {
    int marks1,marks2,marks3;
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d, %d and %d\n", marks1,marks2,marks3);
    printf("The student has %s passed due to invidual marks\n", (marks1>=33 && marks2>=33 && marks3>=33) ? "":"not" );
    printf("The student has %s passed due to overall percentage\n", ((marks1+marks2+marks3)/3)>=40 ? "":"not" );
    return 0;
}