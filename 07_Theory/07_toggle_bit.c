
/* toggle bit using pointers and bitwise operators*/
#include <stdio.h>

int toggle_bit(int* a, int* pos) {
    int mask = 1 << *pos;
    return  *a ^ mask;
    
}
int main() {
    int a=5;
    int pos=2;
    int result=toggle_bit(&a,&pos);
    printf("Value of a after toggling bit at position %d is %d\n", pos, result);
    return 0;
}