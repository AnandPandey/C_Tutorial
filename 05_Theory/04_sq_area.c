#include <stdio.h>
#include <math.h>
int main() {
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    int area = pow(side, 2);
    printf("The area of the square is: %d\n", area);
    return 0;
}