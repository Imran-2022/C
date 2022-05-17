// Write a program to calculate the area of a circle (use constant).

#include <stdio.h>   
#define PI 3.1416
int main()   
{  
    float radius, area;  
    printf("Enter radius of circle\n");  
    scanf("%f", & radius);  
    area = PI * radius * radius;  
    printf("Area of circle : %0.4f\n", area);  
    return 0;  
}   