#include <stdio.h>
int main() {
    char st[4];
    scanf("%s", st); // scanf cannot take multiword string

    printf("%s", st);
    return 0;
}