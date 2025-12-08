/*
A shop offers a discount on an item based on a percentage.

You must compute the final price after applying the discount using:

discountAmount = ( price * percent ) / 100

discountedPrice = price - discountAmount
Important Instructions

Do NOT write the full logic inside main().
Create and use the following function: float discounted(float price, float percent);
This function must return the final price after applying the percentage discount.
Input Format

Two float values: {price} {percent}

Constraints

0.0 ≤ price ≤ 1e6
0.0 ≤ percent ≤ 100.0
Output Format

Single line printing the result as: The final price is: {res}
Where {res} is the final price printed using %f.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float discounted(float price, float percent){
   float discountAmount = ( price * percent ) / 100;
   float  discountedPrice = price - discountAmount;
    return discountedPrice;
     
}

int main() {
    float price,discper;
    scanf("%f %f",&price,&discper);
    printf("The final price is: %f", discounted(price,discper ));
    return 0;
}