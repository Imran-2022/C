// Workers in a factory work for 8 hours a day and get monthly 20000/-. Write a program that takes number of working hours of a worker as input. Find how many hours he works as overtime. Calculate the amount of bonus he receives (5% bonus for 2 hours overtime, 7% bonus for 4 hours overtime, 10% bonus for 6 hours overtime, otherwise 0%).

#include <stdio.h>
int main() {
	char id[10];
	int hour;
	double value, salary;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);
	printf("\nInput the working hrs: ");
	scanf("%d", &hour);
	printf("\nSalary amount/hr: ");
	scanf("%lf", &value);
	salary = value * hour;
	printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id,salary);
	return 0;
}