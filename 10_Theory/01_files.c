#include <stdio.h>
int main() {
    FILE *ptr;
    ptr=fopen("Anand.txt","r");
    char ch;
    fscanf(ptr, "%c", &ch);
    printf("The value of num is %c \n", ch);
    fclose(ptr);
    return 0;
}