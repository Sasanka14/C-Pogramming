// Q4. Write a program to calculate the simple interest. 

#include<stdio.h>

int main(){
    float p;
    float r;
    float t;
    float si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest per annum: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);



    si = (p*r*t)/100;
    printf("The simple interest is: %f", si);
    return 0;
}