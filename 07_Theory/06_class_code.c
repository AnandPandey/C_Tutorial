#include <stdio.h>
int main() {
    char str[]="Computer Organisations 4 Sem";
    char *p=str;
    while (*p != '\0'){
        if (*p >= 'a' && *p <= 'z'){
            *p = *p - 32;  
        }
        p++;
    }
    printf("Modified string: %s\n", str);
    return 0;
}