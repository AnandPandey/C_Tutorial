#include <stdio.h>

char* slice_st(char st[],int,int);

char* slice_st(char st[],int m,int n){
    char *ptr1= &st[m];
    char *ptr2= &st[n];

    st= ptr1;
    st[n]='\0';
    return st;
}


int main() {
    char st[]="Anand Pandey";
    printf("%s", slice_st(st,0,12));
    return 0;
}