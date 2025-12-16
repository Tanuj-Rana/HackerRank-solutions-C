/*You are given a 4-digit integer N.

Your task is to rearrange its digits in descending order, using only if-else statements.

Note:

You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.

Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.

Finally, print the rearranged digits without spaces.

Input Format

A single integer: {N}

Constraints

1000 ≤ N ≤ 9999
N is always a 4-digit integer.
Only if-else statements may be used for comparisons.
No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
Output Format

Print the four digits of N, rearranged in descending order, without spaces.*/

//solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num,d1,d2,d3,d4;
    scanf("%d",&num);
    
    d1=num/1000;
    d2=(num%1000)/100;
    d3=((num%1000)%100)/10;
    d4=((num%1000)%100)%10;
    
    if(d1>=d2 && d1>=d3 && d1>=d4){
        if(d2>=d3 && d3>=d4){
            if(d3>=d4){
                printf("%d%d%d%d",d1,d2,d3,d4);
            } 
            else if(d4>=d3){
                printf("%d%d%d%d",d1,d2,d4,d3);
            } 
         }
        else if(d3>=d2 && d3>=d4){
            if(d2>=d4){
                printf("%d%d%d%d",d1,d3,d2,d4);
            } 
            else if(d4>=d2){
                printf("%d%d%d%d",d1,d3,d4,d2);
            } 
        }
        else if(d4>=d2 && d4>=d3){
            if(d2>=d3){
                printf("%d%d%d%d",d1,d4,d2,d3);
            } 
            else if(d3>=d2){
                printf("%d%d%d%d",d1,d4,d3,d2);
            } 
        }
    }
   else if(d2>=d1 && d2>=d3 && d2>=d4){
        if(d1>=d3 && d1>=d4){
            if(d3>=d4){
                printf("%d%d%d%d",d2,d1,d3,d4);
            } 
            else if(d4>=d3){
                printf("%d%d%d%d",d2,d1,d4,d3);
            } 
         }
        else if(d3>=d1 && d3>=d4){
            if(d2>=d4){
                printf("%d%d%d%d",d2,d3,d1,d4);
            } 
            else if(d4>=d2){
                printf("%d%d%d%d",d2,d3,d4,d1);
            } 
        }
        else if(d4>=d2 && d4>=d3){
            if(d2>=d3){
                printf("%d%d%d%d",d2,d4,d1,d3);
            } 
            else if(d3>=d2){
                printf("%d%d%d%d",d2,d4,d3,d1);
            } 
        }           
    }
   else if(d3>=d1 && d3>=d2 && d3>=d4){
        if(d1>=d2 && d1>=d4){
            if(d2>=d4){
                printf("%d%d%d%d",d3,d1,d2,d4);
            } 
            else if(d2>=d1){
                printf("%d%d%d%d",d3,d1,d4,d2);
            } 
         }
        else if(d2>=d1 && d2>=d4){
            if(d1>=d4){
                printf("%d%d%d%d",d3,d2,d1,d4);
            } 
            else if(d4>=d1){
                printf("%d%d%d%d",d3,d2,d4,d1);
            } 
        }
        else if(d4>=d2 && d4>=d3){
            if(d2>=d1){
                printf("%d%d%d%d",d3,d4,d2,d1);
            } 
            else if(d1>=d4){
                printf("%d%d%d%d",d3,d4,d1,d4);
            } 
        }          
    }
   else if(d4>=d1 && d4>=d2 && d4>=d3){
        if(d1>=d2 && d1>=d3){
            if(d2>=d3){
                printf("%d%d%d%d",d4,d1,d2,d3);
            } 
            else if(d3>=d2){
                printf("%d%d%d%d",d4,d1,d3,d2);
            } 
         }
        else if(d2>=d1 && d2>=d3){
            if(d1>=d3){
                printf("%d%d%d%d",d4,d2,d1,d3);
            } 
            else if(d3>=d1){
                printf("%d%d%d%d",d4,d2,d3,d1);
            } 
        }
        else if(d3>=d2 && d3>=d1){
            if(d2>=d1){
                printf("%d%d%d%d",d4,d3,d2,d1);
            } 
            else if(d1>=d2){
                printf("%d%d%d%d",d4,d3,d1,d2);
            } 
        }          
    } 
     
        
    return 0;
}