// Write a program to display the following series. 1 5 10 15 20 25.…..
//How do I write a program to print the series 0, 5, 10, 15, 20, 25, and 30 using a loop?
#include <stdio.h> 
 
int main() 
{ 
    int i=0;         
    for(i=0;i<=30;i++){       
        if(i%5 == 0) 
            printf("%d \n",i); 
    } 
    return 0; 
} 