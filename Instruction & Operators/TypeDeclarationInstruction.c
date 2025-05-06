// Illustration of Valid and Invalid Instructions in C Programming with Corrections and Best Practices
#include <stdio.h>

int main() {
    // Valid Instructions                 
    int a = 22;
    int b = a;
    int c = b + 1;
    int d = 1, e; // Declares d and e. e is uninitialized.

    int l, m, n; // Correct declaration.  Separate with commas.
    l = m = n = 5; // Correct assignment.

    // Invalid Instructions (Examples and Corrections)

    // 1. Missing Semicolon
    // int f  // Error: Missing semicolon at the end of the statement
    int f;   // Correct: int f;

    // 2. Re-declaration of a variable in the same scope.
    // int a = 33; // Error: 'a' is already defined
    int g = 33; // Correct: Declare a new variable 'g'

    // 3. Using a variable before declaration.
    // h = 44; // Error: 'h' is not declared.
    int h;    // Declaration of h
    h = 44;   // Now it is correct.

    // 4. Incorrect assignment (Type Mismatch) -  If you are very strict in your type checking
    // char ch = 987; // Warning: integer to character conversion
    char ch = 98; // Correct: assign value within the ASCII range of char. Or char ch = 'b';

    // 5. Trying to assign to a constant value
    // 5 = a; // Error: lvalue required as left operand of assignment
    int i = 5; // Correct: int i = 5;

    // 6. Missing initializer in declaration
    int j; // This is valid, but 'j' has an indeterminate value.  It's better practice to initialize it.
    int k = 0; // Correct: int k = 0;

    // 7. Using undeclared function.
    // print("Hello"); // Error: 'print' undeclared (Did you mean 'printf'?)
    printf("Hello\n"); // Correct: printf is the standard output function.

    return 0;
}