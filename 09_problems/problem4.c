#include <stdio.h>

typedef struct complex
{
    int real;
    int img;
}Complex;
int main() {
    Complex c = {2,3};
    printf("The complex number is %d + %di\n", c.real,c.img);
    return 0;
}