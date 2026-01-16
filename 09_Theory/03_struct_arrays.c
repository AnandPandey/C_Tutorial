#include <stdio.h>
struct employee
{
    int code;
    char name[10];
    float salary;
    
};
int main() {
    struct employee facebook[100];
    facebook[0].code= 100;
    facebook[1].code= 23;
    //printf("%d %d\n", facebook[0].code, facebook[1].code);

    struct employee Anand ={1004, "Anand", 200000};
    struct employee Amar={0};// All elements set to 0
    printf("%d %s %.2f\n", Anand.code,Anand.name,Anand.salary);
    printf("%d %s %.2f\n", Amar.code,Amar.name,Amar.salary);
    return 0;
}