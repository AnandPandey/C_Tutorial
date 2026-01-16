#include <stdio.h> 

int change_to_thirty(int*);

int change_to_thirty(int* p){
    *p= (*p)*30;
    return *p;
}
int main() {
    int i=1;

    printf("The value of i after changing thirty times is %d\n", change_to_thirty(&i));
    return 0;
}
