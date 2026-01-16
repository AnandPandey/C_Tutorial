#include <stdio.h>
int main() {
    FILE *fptr;
    FILE *ptr;
    fptr=fopen("Anand.txt", "r");
    ptr=fopen("Anand1.txt", "w");
    char ch=fgetc(fptr); // read one character from file
    fputc('H',ptr); // write character 'c' in file
    printf("The first character from file is: %c",ch);
    return 0;
}