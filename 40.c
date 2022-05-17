// Write a program that will print the positive numbers only among given 20 numbers.

#include<stdio.h>

int main()
{
    //let's assume the maximum array size as 100.
    int arr[100],size,i;

    //Get size input from user
    printf("Enter array size\n");
    scanf("%d",&size);

    //Get all elements using for loop and store it in array
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);

    //print all elements using for loop
    printf("Elements are\n");
    for(i = 0; i < size; i++)
          if(arr[i]%2==0)
          printf("%d\n",arr[i]);

    return 0;
}