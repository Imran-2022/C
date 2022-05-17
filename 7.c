//Write a program to perform logical AND, OR and NOT operation.
#include <stdio.h>   
  
int main ()  
{  
    // declare and initialize variables  
    int a = 20, b = 15;  
    int n1 = 15, n2 = 17;  
      
    // use logical 'AND' and logical 'NOT' operator  
    if (a > b && a != 0)  
    {  
        printf (" The AND (&&) operator said: Both conditions are true. \n ");        
    }  
      
    // use logical 'OR' and logical 'NOT' operator  
    if (n1 > n2 || n2 != 15)  
    {  
        printf (" The OR (||) operator said: Only one condition is true. \n ");  
    }  
      
    if ( ! (a > b && a != 0 ))  
    {  
        printf (" The NOT (!) operator: Here both conditions are true. \n ");         
    }  
    else  
    {  
        printf (" The NOT (!) operator: Here, both conditions are true. "   
        " But, the status of the condition is reversed as false. \n");  
    }  
    return 0;  
}  