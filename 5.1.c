// Write a program to swap the values of three variables.

#include<stdio.h>
int main()
{
int first_number, second_number, third_number, temp;
printf("Enter first number: "); //allow user to add first number
scanf("%d",&first_number);
printf("Enter second number: "); //allow user to add second number
scanf("%d",&second_number);
printf("Enter third number: "); //allow user to add third number
scanf("%d",&third_number);
printf("Before swapping \n");
printf("First number: %d \n", first_number);
printf("Second number: %d \n", second_number);
printf("Third number: %d \n", third_number);
temp = first_number;  //first number is assigned to temp
first_number = second_number; //second number is assigned to first number
second_number = third_number; //third number is assigned to second number
third_number = temp; //first number is assigned to third number
printf("After swapping \n");
printf("First number: %d \n", first_number);
printf("Second number: %d \n", second_number);
printf("Third number: %d \n", third_number);
return 0;
}