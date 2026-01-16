#include <stdio.h>
int main() {
    char st[30];
    gets(st); // it hasn't been suggested to use gets due to buffer overflow instead of this you can use fgets
    // used to appropriately read a multi-word string
    printf("%s", st);
    //puts(st);
    //printf("Hey");
    return 0;
}