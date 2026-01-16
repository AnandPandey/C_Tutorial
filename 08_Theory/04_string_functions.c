#include <stdio.h>
#include <string.h>
int main() {
    char st[]= "Anand";
    char target[]= "Rohit";
    //strcpy(target,st);
    //printf("%d", strlen(st));
    //printf("%s %s\n", st,target);
    //printf("Combined st and target is: %s\n", strcat(st,target));
    int a=strcmp(st,target);
    printf("%d\n",a);
    return 0;
}