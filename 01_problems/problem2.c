#include <stdio.h>

int main()
{
    int radius1,radius2, height;
    float pi=3.14;
    printf("Enter radius of circle: ");
    scanf("%d",&radius1);
    printf("Enter radius of cylinder: ");
    scanf("%d", &radius2);
    printf("Enter height of the cylinder: ");
    scanf("%d", &height);
    printf("Area of circle is: %.2f\n", pi*radius1*radius1);
    printf("Volume of cylinder is: %.2f", pi*radius2*radius2*height);
    return 0;
}