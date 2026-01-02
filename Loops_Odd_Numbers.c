#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    
    for(int i=1; N>=i ; i+=2 ){
        printf("%d ",i);
    }
      
    return 0;
