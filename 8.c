//Write a program that will take an integer number and display as float number. (for example, input: 5 and output: 5.00).

#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    float b=(float)(i);
    printf("%.2f",b);
}