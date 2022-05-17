// Write a program that takes time in minutes and outputs the time in hour(s) and minute(s).

#include <stdio.h>

int main()
{
    int hours, minutes,second;
    scanf("%d",&hours);
    minutes = hours*60;
    second = minutes*60;
    printf("%d minutes & %d second",minutes,second);
    return 0;
}