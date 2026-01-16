#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int *ptr;
    scanf("%d",&n);
    //int arr[n]; // Not Allowed in c language
    ptr= (int*) calloc(n,sizeof(int)); // by default value is 0 for elements in array
    ptr[0]=4;
    ptr[1]=5;
    ptr[2]=2;
    ptr[3]=6;
    printf("%d",ptr[3]);
    return 0;
}