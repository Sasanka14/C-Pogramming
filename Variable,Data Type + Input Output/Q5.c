// Q5. Write a program to calculate perimeter of rectangle. Take sides a and b, from the user.

#include<stdio.h>

int main() {
    float a;
    float b;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    float perimeter = 2 * (a + b);
    printf("The perimeter of the rectangle is %.2f units.\n", perimeter);
    return 0;
}