// Comprehensive Demonstration of Operators, Typecasting, and Operator Precedence in C Programming Language
#include<stdio.h>
#include<math.h>

int main() {
    int a = 10;
    int b = 20;
    int sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);
    int power = pow(a, b); // This may cause an issue since `pow` returns a double and not an integer
    printf("The power of %d and %d is %d\n", a, b, power);

    // Valid Arithmetic Instructions
    int difference = a - b;
    int product = a * b;
    int quotient = b / a;  // Integer division (result will be 2)
    int remainder = b % a; // Modulo operator (result will be 0)
    float f_quotient = (float)b / a; // Floating-point division (result will be 2.000000)

    a += 5;      // Equivalent to a = a + 5; (a becomes 15)
    b -= 3;      // Equivalent to b = b - 3; (b becomes 17)
    product *= 2; // Equivalent to product = product * 2;
    quotient /= 2; // Equivalent to quotient = quotient / 2;
    remainder %= 2; // Equivalent to remainder = remainder % 2;

    // Operator Precedence Example
    int precedence_example = a + b * 2 - 3; // Multiplication (*) has higher precedence than addition (+) or subtraction (-)
    printf("Operator Precedence Example: %d\n", precedence_example);
    // Explanation:
    // 1. b * 2 is evaluated first (17 * 2 = 34)
    // 2. a + 34 is evaluated next (15 + 34 = 49)
    // 3. 49 - 3 is evaluated last (49 - 3 = 46)

    // Invalid Arithmetic Instructions (Examples and Corrections)
    int result;
    if (a != 0) { // Check to prevent division by zero
      result = b / a;
    } else {
      printf("Cannot divide by zero.\n");
    }

    int mod_result;
    if (a != 0) {
        mod_result = b % a;
    } else {
        printf("Cannot perform modulo by zero.\n");
    }

    float float_sum = a + (float)3.14; // Explicit type casting is preferred.

    int temp = 10;
    temp = a; // Correct.

    int d = 5;  // Declare d
    int c = a + d; // Now it is correct.

    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    printf("Float Quotient: %f\n", f_quotient); //Use %f to print float values.
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("result: %d\n", result);
    printf("mod_result: %d\n", mod_result);
    printf("float_sum: %f\n", float_sum);
    printf("c: %d\n", c);

    // Type conversion examples
    printf("Integer to Integer: %d\n", 2 * 2); // Result: 4 (integer)
    printf("Integer to Float (Implicit): %f\n", 2 * 2.0); // Result: 4.000000 (float)
    printf("Integer to Float (Explicit): %f\n", 2 * (float)2); // Result: 4.000000 (float)
    printf("Float to Integer (Implicit): %d\n", 2.5 * 2); // Result: 5 (integer - fractional part is truncated)
    printf("Float to Integer (Explicit): %d\n", (int)(2.5 * 2)); // Result: 5 (integer - fractional part is truncated)
    printf("Float to Float: %f\n", 2.5 * 2.0); // Result: 5.000000 (float)

    // Char to Integer (ASCII Value)
    char ch = 'A';
    printf("Char to Integer: %d\n", ch); // Result: 65 (ASCII value of 'A')

    // Integer to Char (ASCII Character)
    int ascii_val = 66;
    printf("Integer to Char: %c\n", ascii_val); // Result: B (Character with ASCII value 66)

    return 0;
}
