

//Write a program that takes two lowercase characters and prints how many letters apart they are in the alphabet.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  char c1,c2;
    scanf("%c %c",&c1,&c2);
 
    int b=c2-c1;
    printf("The distance between %c and %c is %d",c1,c2,b );
    return 0;
}