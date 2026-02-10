
#include <stdio.h>
int my_atoi(char *s){
    int n=0;
    
    for(int i=1; s[i]>='0' && s[i]<='9'; i++){
        n=10*n+(s[i]-'0');
    }
    if (s[0]=='-') {
        n=-n;
    }
    return n;
}

int main(){
    char str[] = "-1gj2jh3";
    printf("Custom atoi result: %d\n", my_atoi(str));
    return 0;
}
