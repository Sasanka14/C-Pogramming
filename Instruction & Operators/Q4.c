/* Q4. Are the following valid or not: */

#include<stdio.h>

int main() {

    // a. int a = 8^8;
    // ✅ Valid syntax, but logical mistake.
    int a = 8 ^ 8; 
    printf("a = %d (Note: ^ is XOR, not power)\n", a);

    // b. int x; int y = x;
    // ✅ Valid syntax, but y will have garbage value because x is uninitialized.
    int x; 
    int y = x;
    printf("y = %d (Note: garbage value, x is uninitialized)\n", y);

    // c. int x, y = x;
    // ❌ Invalid syntax. x must be declared first.
    // int x, y = x; // Error: 'x' used before initialization.
    // Correct way (for demonstration):
    int p = 10, q = p; 
    printf("q = %d (Correct version)\n", q);

    // d. char stars = '**';
    // ❌ Invalid. A char cannot hold two characters.
    // char stars = '**'; // Error.
    // Correct way:
    char stars = '*'; 
    printf("stars = %c (Corrected to one character)\n", stars);

    return 0;
}
