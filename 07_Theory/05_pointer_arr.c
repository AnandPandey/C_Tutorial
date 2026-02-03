#include <stdio.h>
int main() {
    int arr[5]={10,20,30,40,50};
    int* p=&arr[0];
    for(int i=0; i<5; i++){
        printf("The value of arr[%d] is %d\n", i, *(p+i));
    }
    printf("%d\n", *(p+500));  // Undefined Behavior
    return 0;
}