/*Write a C program that reads five space-separated values from standard input in the following order:

int
long
char
float
double

Then print each value on a new line in the same order.*/


//-----------------------------------------sloution-----------------------------------------------------------//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int Int;
    long Long;
    char Char;
    float Float;
    double Double;  
 scanf("%d %ld %c %f %lf",&Int,&Long,&Char,&Float,&Double );
    printf("%d\n",Int);
    printf("%ld\n",Long);
    printf("%c\n",Char);
    printf("%.3f\n",Float);
    printf("%.9lf\n",Double);
    
    return 0;
}