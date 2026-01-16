#include <stdio.h>
int main() {
    if(1){
        printf("Hello! My self Anand Pandey\n");
    }
    if (0){
        printf("Not a non zero value\n");
    }
    if ('c'){
        printf("Character 'c' is also non zero value\n");
    }
    if( -5 ){
        printf("Negative numbers are also non zero values\n");
    }
    if (3.14){
        printf("Non zero floating point numbers are also considered true\n");
    }
    else{
        printf("Oops! Condition is false");
    }
    return 0;
}