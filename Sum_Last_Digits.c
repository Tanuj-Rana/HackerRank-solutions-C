// Given two integers, extract their last digits and print the sum of those digits.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b)
{
    return ((a % 10) + (b % 10));
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The sum of last digits is: %d", sumLastDigits(a, b));
    return 0;
}
