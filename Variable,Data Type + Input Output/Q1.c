// Q1. Write a program to calculate area of a square. (Side is given)

#include<stdio.h>

int main() {
    int side;
    printf("Enter side of a Square: ");
    scanf("%d", &side);
    printf("Area of Square is: %d", side*side);
    return 0;
}