// Write a program to evaluate the following expression. exp=e+(b-c*d)/e.
#include <stdio.h>

int main()
{

    float b, c, d, e;
    float result;
    printf("enter value of b : ");
    scanf("%d", &b);
    printf("enter value of c : ");
    scanf("%d", &c);
    printf("enter value of d : ");
    scanf("%d", &d);
    printf("enter value of e : ");
    scanf("%d", &e);
    result = e + (b - c * d) / e;// 4+(10-8*2)/4
    printf("exp :%.1lf ", result);
    return 0;
}