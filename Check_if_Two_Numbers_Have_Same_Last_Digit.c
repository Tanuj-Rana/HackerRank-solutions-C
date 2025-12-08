/*You are given two integers a and b.
Your task is to determine whether they share the same last digit.

Bonus Challenge: Try approach of not using modulo operator.

Input Format

Two space separated integers: {a} {b}

Constraints

0 ≤ a, b ≤ 10^9
Output Format

You must print: "YES" or "NO"*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n1,n2;

   scanf("%d %d",&n1,&n2);
   if( ((n1-(n1/10)*10))==(n2-(n2/10)*10) )
   {
       printf("YES");
   }
    else
    {
        printf("NO");
    }
       
    return 0;
}
