#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    char name[10];
    float salary;
}Emp;
int main() {
    /*typedef int Anand;
    Anand a=100;
    printf("The value of a is %d\n",a);
    return 0;*/
    Emp e1;
    Emp* ptr;
    ptr=&e1;
    e1.code=1004;
    strcpy(e1.name,"Anand");
    e1.salary=200000;
    printf("Code, Name, Salary of e1 are: %d %s %.2f\n",e1.code,e1.name,e1.salary);
    printf("Code, Name, Salary of e1 are: %d %s %.2f\n",ptr->code,ptr->name,ptr->salary);
}
