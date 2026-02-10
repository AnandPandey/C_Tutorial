/*check whether system using little endian or big endian*/

#include <stdio.h>
int main() {
    int num = 0x3039;
    char *ptr = (char *)&num;
    if (*(ptr) == 0x39) {
        printf("System is using little endian\n");
    } else {
        printf("System is using big endian\n");
    }
    printf("Changing ptr+2 to 2\n");
     *(ptr+1)=2;
     printf("Value of num after changing ptr+2: %d\n", num);
    return 0;
}