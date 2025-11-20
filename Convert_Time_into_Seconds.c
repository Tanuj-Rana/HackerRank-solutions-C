
//You are given hours, minutes, and seconds. Convert the entire time into total seconds.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int timeinsec(int a, int b, int c) {
    int d =a*3600 + b*60 + c;
    return d;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("Total seconds: %d", timeinsec(a,b,c));
    return 0;
}

