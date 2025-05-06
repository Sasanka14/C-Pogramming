// Q3. Write a program to check if a number is divisible by or not.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("The Number is divisible by: %d\n", num % 2 == 0);
    printf("Where 1 means divisible and 0 means not divisible.\n");

    return 0;
}

/*
Advanced logic:
if (num % 2 == 0)   // Check if the number is even (divisible by 2)
    printf("The number is divisible by 2.\n");
else
    printf("The number is not divisible by 2.\n");
*/
