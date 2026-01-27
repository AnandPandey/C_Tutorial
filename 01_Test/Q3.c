#include <stdio.h>

int main() {
    signed char num;

    printf("Enter an 8-bit number (-128 to 127): ");
    scanf("%hhd", &num);

    if ((num >> 7) & 1)
        printf("Number is NEGATIVE\n");
    else
        printf("Number is POSITIVE\n");

    return 0;
}