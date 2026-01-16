#include <stdio.h>
#include <string.h>

void strcopy(char source[], char target[]);

void strcopy(char source[], char target[]){
    int n=strlen(source);
    for (int i=0; i<n; i++){
        target[i]=source[i];
    }
    target[strlen(source)]='\0';
}
int main() {
    char source[]="Anand Pandey";
    char target[20];
    strcopy(source,target);
    printf("Source and Target strings are: %s %s",source,target);
    return 0;
}