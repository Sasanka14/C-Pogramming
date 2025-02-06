// Q6. Take a number(n) from user & output its cube(n*n*n).

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Cube of %d is %d", n, n*n*n);
    return 0;
}