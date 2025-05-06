// Comprehensive Demonstration of All Major Operators in C Programming with Examples
#include<stdio.h>

int main() {
    int a = 5, b = 3, c = 2, result;
    int *ptr;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("Addition (5 + 3): %d\n", a + b);
    printf("Subtraction (5 - 3): %d\n", a - b);
    printf("Multiplication (5 * 3): %d\n", a * b);
    printf("Division (5 / 2): %d\n", a / c);
    printf("Modulus (5 %% 2): %d\n\n", a % c);

    // Relational Operators
    printf("Relational Operators:\n");
    printf("Equal to (5 == 3): %d\n", a == b);
    printf("Not equal to (5 != 3): %d\n", a != b);
    printf("Greater than (5 > 3): %d\n", a > b);
    printf("Less than (5 < 3): %d\n", a < b);
    printf("Greater than or equal to (5 >= 5): %d\n", a >= a);
    printf("Less than or equal to (5 <= 3): %d\n\n", a <= b);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("Logical AND ((5>3) && (2>1)): %d\n", (a > b) && (c > 1));
    printf("Logical OR ((5<3) || (2>1)): %d\n", (a < b) || (c > 1));
    printf("Logical NOT (!(5>3)): %d\n\n", !(a > b));

    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("Bitwise AND (5 & 3): %d\n", a & b);
    printf("Bitwise OR (5 | 3): %d\n", a | b);
    printf("Bitwise XOR (5 ^ 3): %d\n", a ^ b);
    printf("Bitwise Complement (~5): %d\n", ~a);
    printf("Left Shift (5 << 1): %d\n", a << 1);
    printf("Right Shift (5 >> 1): %d\n\n", a >> 1);

    // Assignment Operators
    printf("Assignment Operators:\n");
    int d = 5; // fresh variable for assignment
    printf("Initial value d = %d\n", d);
    d += 3;
    printf("After d += 3: %d\n", d);
    d -= 2;
    printf("After d -= 2: %d\n", d);
    d *= 2;
    printf("After d *= 2: %d\n", d);
    d /= 2;
    printf("After d /= 2: %d\n", d);
    d %= 3;
    printf("After d %%= 3: %d\n\n", d);

    // Increment and Decrement Operators
    printf("Increment and Decrement Operators:\n");
    int e = 5;
    printf("Pre-increment (++e): %d\n", ++e);
    printf("Post-increment (e++): %d\n", e++);
    printf("Pre-decrement (--e): %d\n", --e);
    printf("Post-decrement (e--): %d\n", e--);
    printf("Final value of e: %d\n\n", e);

    // Conditional (Ternary) Operator
    printf("Conditional (Ternary) Operator:\n");
    result = (a > b) ? 100 : 200;
    printf("Result of (5>3) ? 100 : 200 => %d\n\n", result);

    // Special Operators
    printf("Special Operators:\n");
    printf("Size of int (sizeof(int)): %lu bytes\n", sizeof(int));
    ptr = &a;
    printf("Address of a (&a): %p\n", ptr);
    printf("Value at address (*ptr): %d\n", *ptr);

    return 0;
}
