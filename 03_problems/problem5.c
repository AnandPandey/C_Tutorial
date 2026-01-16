#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("%c is a lowercase letter.\n", ch);
    } else if(ch>=65 && ch<=90){
        printf("%c is an uppercase letter.\n", ch);
    } else if(ch>=48 && ch<=57){
        printf("%c is a digit.\n", ch);
    } else{
        printf("%c is a special character.\n", ch);
    }
    return 0;
}