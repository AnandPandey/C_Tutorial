#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    char name[10];
    float salary;
    
};

void show(struct employee e);

void show(struct employee e){
    printf("Code, Name, Salary are: %d %s %.2f\n", e.code,e.name,e.salary);
}
int main() {
    struct employee e1;
    e1.code=1005;
    strcpy(e1.name,"Manish");
    e1.salary= 150000;
    show(e1);
    return 0;
}