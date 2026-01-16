#include <stdio.h>
int main() {
    int income, tax=0;
    printf("Enter your income: \n");
    scanf("%d", &income);
    if (income<=250000) {
        tax = 0;
    } else if (income<=500000) {
        tax = (income - 250000) * 5 / 100;
    } else if (income<=1000000) {
        tax = (250000 * 5 / 100) + (income - 500000) * 20 / 100;
    } else {
        tax = (250000 * 5 / 100) + (500000 * 20 / 100) + (income - 1000000) * 30 / 100;
    }
    printf("Your tax is: %.2f\n", tax); 
    return 0;
}