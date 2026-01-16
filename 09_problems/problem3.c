#include <stdio.h>
typedef struct emp{
    int salary;
    float score;
}Employee;
int main() {
    Employee e1;
    Employee* ptr1=&e1;
    //(*ptr1).salary=  200000;
    ptr1->salary= 200000;
    ptr1->score= 200;
    printf("The value of salary is %d and the value of score is %f \n", ptr1->salary, ptr1->score);
    return 0;
}