
#include <stdio.h>
int main(int argc, char *argv[]) {
    printf("Number of command line arguments: %d\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
        printf("argv[%d] address: %p\n", i, &argv[i]);
        printf("argv[%d] value: %s\n", i, argv[i]);
        for(int j=0; argv[i][j] != '\0'; j++){
            printf("argv[%d][%d] address: %p\n", i, j, &argv[i][j]);
            
            printf("argv[%d][%d] value: %c\n", i, j, argv[i][j]);}
    }
    return 0;
}