#include <stdio.h>

int count(int arr[],int n);

int count(int arr[], int n){
    int count=0;
    for (int i=0; i<n; i++){
        if (arr[i]>0)
            count+=1;
    }
    return count;
}
int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/ sizeof(arr[0]);
    printf("Number of positive integers in array is %d\n", count(arr,n));
    return 0;
}