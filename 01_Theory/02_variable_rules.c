#include <stdio.h>

// C language only allows underscore (_) and alphanumeric characters (A-Z, a-z, 0-9) in variable names.
// Variable names cannot start with a digit (0-9) and cannot contain special characters like @, #, $, %, etc.
// Variable names are case-sensitive, meaning 'Variable', 'variable', and 'VARIABLE' would be considered different variables.
int main(){
    int my_variable = 5; // Valid variable name
    int _anotherVariable = 10; // Valid variable name
    // int 2ndVariable = 15; // Invalid variable name (starts with a digit)
    // int my-variable = 20; // Invalid variable name (contains a hyphen)

    printf("my_variable: %d\n", my_variable);
    printf("_anotherVariable: %d\n", _anotherVariable);
    return 0;
}