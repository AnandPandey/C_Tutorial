#include <stdio.h>
int main() {
    int marks[5]={45, 67, 89, 90, 34};

    printf("Size of marks array is: %lu bytes\n", sizeof(marks));

    printf("Address of marks array is: %u\n", marks);
    printf("Address of marks[0] is: %u\n", &marks[0]);
    printf("Address of marks[1] is: %u\n", &marks[1]);
    printf("Address of marks[2] is: %u\n", &marks[2]);  
    printf("Address of marks[3] is: %u\n", &marks[3]);
    printf("Address of marks[4] is: %u\n", &marks[4]);
    return 0;
}