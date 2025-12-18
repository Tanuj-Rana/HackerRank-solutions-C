/*You are given a date represented by three integers: day, month, and year.
Your task is to calculate and print the date of the next day in DD-MM-YYYY format.

Rules and Requirements:

Use only if / else conditional logic
Do not use loops or switch statements
Correctly handle:

Month endings
Year transitions
Leap-year February
Constraints

1 ≤ day ≤ 31
1 ≤ month ≤ 12
1 ≤ year ≤ 10^9
Use only conditional statements (if / else)
Output Format

Print a single line containing the next date in the format: DD-MM-YYYY

*/
//solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int Leap_year,D,M,Y;
    scanf("%d %d %d",&D,&M,&Y);
    
    
    if( (Y%400==0) || ( (Y%4==0) && (Y%100!=0) ) ){
        Leap_year=1;
    }
    else{
       Leap_year=0;
    }
    
    if( M==4 || M==6 || M==9 || M==11 ){
        
        if(D<30){
            ++D;
        }
        else{
            D=1;
            ++M; 
        }   
    }
    else if(M==1 || M==3 || M==5 || M==7 || M==8 || M==10 || M==12 ){
        
        if(D<31){
            ++D;
        }
        else{
            D=1;
            ++M;
        }
    }
    else if (M==2){
        
        if(Leap_year){
            if(D<=28){
                ++D;
            }
            else{
                D=1;
                ++M; 
            }
        }
        else{
            if(D<=27){
                ++D;
              }
            else{
                D=1;
                ++M; 
              } 
           }
         
    } 
    
    if(M>12){
        M=1;
        ++Y;
    }

    
    if(D<10){
        if(M<10){
            printf("0%d-0%d-%d",D,M,Y);
        }
        else{
            printf("0%d-%d-%d",D,M,Y);
        }
    }
    else{
        if(M<10){
            printf("%d-0%d-%d",D,M,Y);
        }
        else{
            printf("%d-%d-%d",D,M,Y);
        }
    }
    
    
    return 0;
}