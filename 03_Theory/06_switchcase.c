#include <stdio.h>
int main() {
    int a;
    printf("Enter the value of a(1-5): ");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("The value of a is 1\n");
            break;
        case 2:
            printf("The value of a is 2\n");
            break;
        case 3:
            printf("The value of a is 3\n");
            break;
        case 4:
            printf("The value of a is 4\n");
            break;
        case 5:
            printf("The value of a is 5\n");
            break;
        default:
            printf("The value of a is not between 1 and 5\n");
    }
    return 0;
}