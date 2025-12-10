/*In the mystical kingdom of Orlon, there lies an enchanted mirror, renowned for revealing secrets of destiny. However, the mirror tests anyone who dares to stand before it by analyzing a single number. The verdict it delivers is based on a set of ancient rules, but beware—only natural numbers are entertained by the mirror!

A number can hold one of several mystical statuses based on the following conditions:

Condition 1: The number is even and greater than 10.
Condition 2: The number is greater than 15 and a multiple of 3.
Condition 3: The number is a multiple of 7.
The mirror’s verdict is as follows:

If the number satisfies all three conditions, it proclaims the number as "SUPERNATURAL".
If the number satisfies exactly two conditions, it calls the number "MIRACULOUS".
If the number satisfies exactly one condition, it deems the number "MAGICAL".
The number is "NORMAL" if none of the magical conditions are met.
The mirror remains silent for numbers without significance, discarding such attempts with an "INVALID" response.
Your task is to create a program that simulates the enchanted mirror. Based on the input number, the program should output the mirror's verdict.

Input Format

A single integer N, the number provided to the mirror.

Constraints

-10^6 ≤ N ≤ 10^6

Output Format

A single line, "The verdict for the number [N] is: [RESULT]"*/

//solution---


#include <stdio.h>

int main() {
  int c1,c2,c3,n;
  scanf("%d",&n);
    
  c1 = ((n>10) && ((n&1)==0));
  c2 = ((n>15) && (n%3==0));
  c3 = ((n%7==0));
  printf("The verdict for the number %d is: ",n);
 if(n>0){
     
   if(c1 && c2 && c3){
        printf("SUPERNATURAL");
    }
    else if( (c1 && c2) || (c1 && c3) || (c1 && c2) ){
        
        printf("MIRACULOUS");
    }
    else if ((c1) || (c2) || (c3) ){
        printf("MAGICAL");
    }
    else{
        printf("NORMAL");
    }
 }
 else{
     printf("INVALID");
 }
        
        
    return 0;
}