//Write a program to convert a given temperature in Celsius to Fahrenheit and vice versa.
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
}