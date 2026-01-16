#include <stdio.h>
int main() {
    char ch;
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("Anand.txt","r");
    ptr1=fopen("Amar.txt","a");
    while(1)
    {
        ch=fgetc(ptr);
        if (ch==EOF){
            break;
        }
        else{
            fprintf(ptr1,"%c",ch);
            fprintf(ptr1,"%c",ch);
            printf("%c",ch);
        }
    }
    return 0;
}