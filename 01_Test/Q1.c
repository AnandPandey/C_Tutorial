#include <stdio.h>
int main() {
    unsigned char num;
    int i;

    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    printf("8-bit Binary representation: ");
    for (i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }

    return 0;
}