
// You are given the length and width of a rectangle .Find area.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int area(int length, int width)
{
    return (length * width);
}
int main()
{
    int length, width;
    scanf("%d %d", &length, &width);
    printf("The area is: %d units", area(length, width));
    return 0;
}