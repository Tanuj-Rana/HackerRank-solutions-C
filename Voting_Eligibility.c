/*
You are given an integer age.
Your task is to check whether the person is eligible to vote.

A person is eligible to vote if:

age ≥ 18
Input Format

Single integer input: {age}

Constraints

0 ≤ age ≤ 150
Output Format

You must print:

"Eligible" or "Not Eligible"*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int age;
    scanf("%d",&age);
    if(0<=age && age<=150 )
    {
        if(age>=18)
        {
            printf("Eligible");
        }
        else
        {
            printf("Not Eligible");
        }
    }

   
    return 0;
}
