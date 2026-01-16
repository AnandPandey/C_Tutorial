#include <stdio.h>
int main() {
    FILE *ptr;
    char name1[30], name2[30];
    int salary1,salary2;
    ptr= fopen("harry.txt","w");

    printf("Enter the name of employee \n");
    scanf("%s", &name1);

    printf("Enter the salary of employee \n");
    scanf("%d", &salary1);

    printf("Enter the name of employee \n");
    scanf("%s", &name2);

    printf("Enter the salary of employee \n");
    scanf("%d", &salary2);

    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%c",'\n');

    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%s",", ");
    fprintf(ptr,"%d",salary2);
    fprintf(ptr,"%c",'\n');

    return 0;
}