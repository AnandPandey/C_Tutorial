#include <stdio.h>

float average(int a, int b , int c);

float average(int a, int b , int c){
    float avg = (a + b + c) / 3.0;
    return avg;
}
int main() {
    average(10, 20, 30);
    printf("Average: %.2f\n", average(10, 20, 30));
    return 0;
}