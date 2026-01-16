#include <stdio.h>
#include <string.h>
int main() {
    char c='z';
    char str[]= "Nz!obnf!jt!Boboe!Qboefz";
    int count=0;
    for(int i=0; i<strlen(str); i++){
        if (str[i]==c)
            count+=1;
    }
    printf(" No. of occurrences of %c are: %d", c,count);
    return 0;
}