#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter value of n1, n2, n3\n");
    scanf("%d %d %d", &n1,&n2,&n3);
    int arr[3][10];
    int mul[3]={n1,n2,n3};
    for (int i=0; i<3; i++){
        for (int j=0; j<10; j++){
            arr[i][j]= mul[i]*(j+1);
            printf("The value of arr[%d][%d] is %d\n", i,j,arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}