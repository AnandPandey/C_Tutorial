#include <stdio.h>

void reverse_array(int arr[],int n);

void print_Array(int arr[], int n){
    for (int i=0;i<10;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void reverse_array(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}


int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nOriginal Array is: \n");
    print_Array(arr,n);
    reverse_array(arr,n);
    printf("\nThe reverse array is: \n");
    print_Array(arr,n);

    return 0;
}