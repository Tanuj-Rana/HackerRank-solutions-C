/*Write a C program to classify an integer N into one of the following categories based on specific conditions:

Categories:

Category A: N is divisible by 2 and 3 but not divisible by 5.
Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
Category D: N is a perfect square less than 200.
Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
Category E: If none of the above conditions are satisfied.
Note: Output the category that comes first in lexicographic order.

Input Format

A single integer N

Constraints

-10^3 ≤ N ≤ 10^3

Output Format

A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').*/

//solution---

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d",&num);
    
    
    int p0 =num/2;
    int p1=num/3;
    int p2=num/5;
    int p3=num/7;
    int p4=num/11;
    
    int n0 =p0%2;
    int n1=p1%3;
    int n2=p2%5;
    int n3=p3%7;
    int n4=p4%11;
    
    int s=0; 
    for(int q=1;q*q<=num;q++){
          if (q*q==num){
             s=1;
          }
          
      }
    
    if( (num%2==0 && num%3==0) && (num%5!=0) ){
        printf("A");
    }
    else if(
        (num>20 && num%2==0 && n0!=0 && (p0==3 || p0==5 || p0==7 || p0==11)) 
        ||
        (num>20 && num%3==0 && n1!=0 && (p1==2 || p1==5 || p1==7 || p1==11)) 
        ||
        (num>20 && num%5==0 && n2!=0 && (p2==2 || p2==5 || p2==7 || p2==11)) 
        ||
        (num>20 && num%7==0 && n3!=0 && (p3==2 || p3==3 || p3==5 || p3==11)) 
        ||
        (num>20 && num%11==0 && n4!=0 && (p4==2|| p4==3 || p4==5 || p4==7))
    ) {
        printf("B");
    }
    else if( (num>9 && num<100) && (((num%7==0 && num%3!=0)) || ((num%3==0 && num%7!=0))) ){
        printf("C");
    }
    else if ((200>num)&&(s)){
        printf("D");
    }
    else{
        printf("E");
    }
   
    
    return 0;
}