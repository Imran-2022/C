//  Write a program for the following pseudocode.
/*
Step 1: Read the values of a and b.
Step 2: Multiply a by b and store in c.
Step 3: Increment c.
Step 4: Evaluate: final=a2+c.
Step 5: Display final as output.
*/
#include <stdio.h>
int main(){
    int a,b,c,final;
    scanf("%d%d",&a,&b);
    c=a/b;
    final=a*a+c;
    printf("%d",final);
}