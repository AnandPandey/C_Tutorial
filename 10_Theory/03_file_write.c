#include <stdio.h>


int main() {
    FILE *ptr;
    ptr=fopen("Anand1.txt","w");

    char ch= 'A';
    fprintf(ptr, "%c",ch);

    fclose(ptr);
    return 0;
}