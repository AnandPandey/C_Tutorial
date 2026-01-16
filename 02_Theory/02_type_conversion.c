#include <stdio.h>
int main() {
    float a=9;
    int b=2;
    float c= a/b; 
    //float d= (float)a/b; // Type casting, result is 4.5
    printf("Result of a/b as int is %.2f\n", c);
    //printf("Result of a/b with type casting is %.2f\n", d);
    return 0;
}           