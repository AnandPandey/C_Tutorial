#include <stdio.h>
int main() {
    float fahr;
    printf("Fahrenheit to celsius:");
    scanf("%f", &fahr);
    printf("Celsius: %.2f\n", (5.0/9.0)*(fahr-32.0));
    return 0;
}