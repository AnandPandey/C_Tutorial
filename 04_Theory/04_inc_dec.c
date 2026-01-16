#include <stdio.h>
int main() {
    int a=3;
    int b=a++;
    int c=++a;
    printf("The Value of b is %d\n",b);
    printf("The value of c is %d\n",c);

    // Demonstrating decrement operators
    int x=5;
    int y=x--;
    int z=--x;
    printf("The Value of y is %d\n",y);
    printf("The value of z is %d\n",z);
    return 0;
}

// pre-increment: ++a (increments a, then returns a)
// post-increment: a++ (returns a, then increments a)
// pre-decrement: --a (decrements a, then returns a)
// post-decrement: a-- (returns a, then decrements a)