#include <stdio.h>

int main()
{
    // Integer data type
    int myInt = 42;
    printf("Integer: %d\n", myInt);

    // Floating-point data type
    float myFloat = 3.14f;
    printf("Float: %.2f\n", myFloat);

    // Double data type
    double myDouble = 2.718281828459;
    printf("Double: %.10f\n", myDouble);

    // Character data type
    char myChar = 'A';
    printf("Character: %c\n", myChar);

    // String (array of characters)
    char myString[] = "Hello, World!";
    printf("String: %s\n", myString);

    // Boolean data type (using _Bool from stdbool.h)
    #include <stdbool.h>
    bool myBool = false;
    printf("Boolean: %s\n", myBool ? "true" : "false");

    return 0;
}