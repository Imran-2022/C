// Write a program that takes three numbers as input and display them in ascending order (from smallest to largest).
// large to smallest

#include <stdio.h>

int main()

{

    int arr[3], i;

    for (i = 0; i < 3; i++)

    {

        scanf("%d", &arr[i]);
    }

    int first_max = 0, second_max = 0, third_max = 0;

    for (i = 0; i < 3; i++)

    {

        if (arr[i] > first_max)

        {

            third_max = second_max;

            second_max = first_max;

            first_max = arr[i];
        }

        else if (arr[i] > second_max && arr[i] < first_max)

        {

            third_max = second_max;

            second_max = arr[i];
        }

        else if (arr[i] > third_max && arr[i] < second_max)

        {

            third_max = arr[i];
        }
    }

    printf("%d %d %d", first_max, second_max, third_max);
}