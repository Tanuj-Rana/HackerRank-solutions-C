

//Given a 3-digit number ABC, extract and print A, B, and C separately.

//------------------------------------------------sloution-----------------------------------------------------//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void split(int n){
    int hundreds_place = n/100;
    int tens_place = (n%100)/10;
    int ones_place =(n%100)%10;
    printf("%d %d %d",hundreds_place,tens_place,ones_place);
    
}

int main() {
    int n;
    scanf("%d",&n);
    split(n);
    return 0;
}
