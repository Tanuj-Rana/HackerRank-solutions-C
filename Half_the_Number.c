

//Write a program that takes an integer as input and print its half value as a floating-point number with 2 decimals.//



//------------------------------------------------sloution-----------------------------------------------------//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float halfvalue(int num){
    return (float)num/2;
    
}

int main() {
      int n1;
      scanf("%d",&n1);
      printf("Half of %d is %.2f",n1,halfvalue(n1));  
      return 0;
}