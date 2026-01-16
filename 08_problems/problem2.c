#include <stdio.h>
#
int stlen(char st[]);

int stlen(char st[]){
    int i=0, count;
    char c =st[i];
    while (c!='\0'){
        c=st[i];
        i++;
    }
    count=i-1;
    return count;
}
int main() {
    char st[]="Anand";
    printf("Length of string is: %d\n", stlen(st));
    return 0;
}