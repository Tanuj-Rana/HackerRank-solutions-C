/*
Write a program to determine the largest number among three integer numbers.

Input Format

The input consists of three integers a, b, and c, separated by spaces.
Constraints

−10^3 ≤ a, b, c ≤10^3

Output Format

Print the largest number among the three integers along with the given message.*/


#include <stdio.h>

int main() {
    int n1,n2,n3,res;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>=n2 && n1>=n3)
    {
        res=n1;
    }
    else if(n2>=n1 && n2>=n3)
    {
        res=n2;
    }
    else if(n3>=n1 && n3>=n2)
    {
        res=n3;
    }
    
    printf("The largest number is : %d",res);
    
    return 0;
}