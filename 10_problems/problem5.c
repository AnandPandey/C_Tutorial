#include <stdio.h>
int main() {
    FILE *ptr;
    FILE *fptr;
    int num=5;
    ptr=fopen("int.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    fptr=fopen("int.txt","w");
    printf("The original value is: %d", num);
    fprintf(fptr, "%d",num*2);
    fclose(fptr);
    return 0;
}