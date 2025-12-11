/*
You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.*/

//solution--

#include <stdio.h>

int main() {
    int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
    scanf("%d %d %d %d %d %d %d %d %d %d", &n0,&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9);

    int i1,p1,i2,p2,i3,p3;
    
    scanf("%d %d", &i1,&p1);

    if(i1==0){
         n0=(n0+p1)%10;
    }
    else if(i1==1){
        n1=(n1+p1)%10;
    }
    else if(i1==2){
        n2=(n2+p1)%10;
    }
    else if(i1==3){
        n3=(n3+p1)%10;
    }
    else if(i1==4){
        n4=(n4+p1)%10;
    }
    else if(i1==5){
        n5=(n5+p1)%10;
    }
    else if(i1==6){
        n6=(n6+p1)%10;
    }
    else if(i1==7){
        n7=(n7+p1)%10;
    }
    else if(i1==8){
        n8=(n8+p1)%10;
    }
    else if(i1==9){
        n9=(n9+p1)%10;
    }
    
    scanf("%d %d", &i2,&p2);

    if(i2==0){
         n0=(n0+p2)%10;
    }
    else if(i2==1){
        n1=(n1+p2)%10;
    }
    else if(i2==2){
        n2=(n2+p2)%10;
    }
    else if(i2==3){
        n3=(n3+p2)%10;
    }
    else if(i2==4){
        n4=(n4+p2)%10;
    }
    else if(i2==5){
        n5=(n5+p2)%10;
    }
    else if(i2==6){
        n6=(n6+p2)%10;
    }
    else if(i2==7){
        n7=(n7+p2)%10;
    }
    else if(i2==8){
        n8=(n8+p2)%10;
    }
    else if(i2==9){
        n9=(n9+p2)%10;
    }

    scanf("%d %d", &i3,&p3);

    if(i3==0){
         n0=(n0+p3)%10;
    }
    else if(i3==1){
        n1=(n1+p3)%10;
    }
    else if(i3==2){
        n2=(n2+p3)%10;
    }
    else if(i3==3){
        n3=(n3+p3)%10;
    }
    else if(i3==4){
        n4=(n4+p3)%10;
    }
    else if(i3==5){
        n5=(n5+p3)%10;
    }
    else if(i3==6){
        n6=(n6+p3)%10;
    }
    else if(i3==7){
        n7=(n7+p3)%10;
    }
    else if(i3==8){
        n8=(n8+p3)%10;
    }
    else if(i3==9){
        n9=(n9+p3)%10;
    }

    printf("%d %d %d %d %d %d %d %d %d %d",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);

    return 0;
}

