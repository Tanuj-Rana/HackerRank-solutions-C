/*Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print the smaller of the two integers.*/

#include <stdio.h>

int main() {

     int n1,n2;
     scanf("%d %d",&n1,&n2);
            
      if((n1-n2)>>31 ){
          printf("%d",n1);
      }  
      else{
          printf("%d",n2);
      }   
    return 0;
}