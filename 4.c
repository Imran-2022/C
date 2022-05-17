// Write a program to find the square root and power of a given number.

// part 1,
#include <stdio.h>
#include <math.h>
int main()
{
    double num, root;
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);
    root = sqrt(num); // sqrt -> math.h 
    printf("Square root of %.2lf = %.2lf", num, root);
    return 0;
}

// part 2,

#include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}