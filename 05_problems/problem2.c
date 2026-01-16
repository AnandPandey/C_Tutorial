#include <stdio.h>

float force(float);

float force(float mass){
    return mass * 9.8;
}
int main() {
    float mass=10.0;
    printf("Force of given mass is %.2f\n", mass * 9.8);
    return 0;
}