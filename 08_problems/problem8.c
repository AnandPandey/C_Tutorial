#include <stdio.h>
#include <string.h>
int main() {
    char c='i';
    char st[]= "My name is Anand Pandey";
    int contains=0;
    for(int i=0; i<strlen(st); i++){
        if (st[i]==c){
            contains=1;
            break;
        }
    }
    if (contains){
        printf("Yes, it contains %c", c);
    }
    else{
        printf("No, it does not contain %c",c);
    }
    return 0;
}