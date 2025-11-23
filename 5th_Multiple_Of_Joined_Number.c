/*You will be given four digits, each from 0–9.
Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.*/

//-----------------------------------------sloution-----------------------------------------------------------//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int num1, int num2, int num3, int num4){
    
    return (num1 * 1000 + num2 * 100 + num3 * 10 + num4) * 5;
}

int main()
{
    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("The number is: %d", buildNumber(num1, num2, num3, num4));
    return 0;
}
