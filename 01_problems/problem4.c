#include <stdio.h>
int main() {
    float SI, P;
    int R, T;
    printf("Enter principal amount: ");
    scanf("%f", &P);
    printf("Enter rate of interest: ");
    scanf("%d", &R);
    printf("Enter time in years: ");
    scanf("%d", &T);
    SI = (P*R*T)/100;
    printf("Simple Interest is: %.2f\n", SI);
    return 0;
}