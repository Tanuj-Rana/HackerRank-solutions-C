/*A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

For units ≤ 100: The rate is ₹5 per unit.
For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
For units > 300: The rate is ₹10 for units above 300.
Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.

Input Format

A single integer n representing the number of electricity units consumed.
Constraints

−10^6 ≤ n ≤ 10^6

Output Format

If the input is invalid, print, "Invalid Input!"
Otherwise, print the total electricity bill after applying the discount, rounded to two decimal places, "The electricity bill is: [amount]."*/

// solution--------



#include <stdio.h>

int main() {
    int n;
    float amount= 0.0;
    int flag=0;
    
    scanf("%d",&n);
    if(n<0)
    {  
        printf("Invalid Input!");
        flag=1;
    }
    else
    {  
        if(n>0 && n<= 100)
        {
         amount= n*5;
        }
       if(n>100 && n<=300)
        {
        amount= 100*5 + (n-100)*7;
        }
        if(n>300)
        {
         amount = 100*5 + 200*7 +(n-300)*10;
        }
    }
    if(amount<=1200 && n>0){
        amount = amount - amount*0.1;
    }
    if(flag==0)
    {
      printf("The electricity bill is: %.2f.",amount);
    }
     
    return 0;
}