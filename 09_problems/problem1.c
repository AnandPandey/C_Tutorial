#include <stdio.h>

struct vector 
{
    int i;
    int j;
};
int main() {
    struct vector v = {2,3};
    printf("Two dimensional vector's value is %di %dj\n", v.i,v.j);
    return 0;
}