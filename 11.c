// Write a program to find the largest among three numbers (using if else statement).

#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // taking three elements as input
    if (a > b && a > c)
    {
        printf("Biggest Element: %d", a);
    }
    else if (b > c && b > a)
    {
        printf("Biggest Element: %d", b);
    }
    else
    {
        printf("Biggest Element: %d", c);
    }
    return 0;
}