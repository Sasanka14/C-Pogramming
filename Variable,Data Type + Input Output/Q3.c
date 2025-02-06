// Q3. Write a program to convert Fahrenheit to Celsius, Celsius to Fahrenheit, Celsius to Kelvin and Fahrenheit to Kelvin.

#include <stdio.h>

int main() {
    float fahrenheit;
    float celsius;
    float kelvin;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0; // Use 5.0 and 9.0 for floating-point division
    printf("The temperature in Celsius is %.2f\n", celsius);

    kelvin = celsius + 273.15;
    printf("The temperature in Kelvin is %.2f\n", kelvin);


    printf("\nEnter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);

    kelvin = celsius + 273.15;
    printf("The temperature in Kelvin is %.2f\n", kelvin);

    printf("\nEnter the temperature in Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;
    printf("The temperature in Celsius is %.2f\n", celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("The temperature in Fahrenheit is %.2f\n", fahrenheit);


    return 0;
}