/* Q2. Solve the Following Problem :
       a. 5*2 - 2*3
       b. 5*2 / 2*3
       c. 5*(2/2) * 3
       d. 5+2 / 2*3
*/ 

#include<stdio.h>

int main() {
    // Part a: 5*2 - 2*3
    // Operator precedence: * (Multiplication) has higher precedence than - (Subtraction)
    // Steps:
    // 1. 5 * 2 = 10
    // 2. 2 * 3 = 6
    // 3. 10 - 6 = 4
    int a = 5 * 2 - 2 * 3;
    printf("a. 5*2 - 2*3 = %d\n", a);

    // Part b: 5*2 / 2*3
    // Operator precedence: * (Multiplication) and / (Division) are of the same precedence, evaluated left to right.
    // Steps:
    // 1. 5 * 2 = 10
    // 2. 10 / 2 = 5
    // 3. 5 * 3 = 15
    int b = 5 * 2 / 2 * 3;
    printf("b. 5*2 / 2*3 = %d\n", b);

    // Part c: 5*(2/2) * 3
    // Operator precedence: Parentheses () are evaluated first, then * (Multiplication).
    // Steps:
    // 1. 2 / 2 = 1
    // 2. 5 * 1 = 5
    // 3. 5 * 3 = 15
    int c = 5 * (2 / 2) * 3;
    printf("c. 5*(2/2) * 3 = %d\n", c);

    // Part d: 5+2 / 2*3
    // Operator precedence: / (Division) and * (Multiplication) are higher precedence than + (Addition). 
    // Multiplication and Division are evaluated left to right.
    // Steps:
    // 1. 2 / 2 = 1
    // 2. 1 * 3 = 3
    // 3. 5 + 3 = 8
    int d = 5 + 2 / 2 * 3;
    printf("d. 5+2 / 2*3 = %d\n", d);

    return 0;
}
