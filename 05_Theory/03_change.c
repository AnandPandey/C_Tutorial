#include <stdio.h>
int change(int a);
int change(int a){
    a=65;
    return a;
}
int main() {
    int b = 10;
    printf("The value of b before calling change is %d\n", b);
    change(b);
    printf("The value of b after calling change is %d\n", b);
    return 0;
}   