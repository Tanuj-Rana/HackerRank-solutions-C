/*Convert 24-Hour Time to 12-Hour Format


You are given two integers h and m, representing time in 24-hour format:

h → Hour (0 to 23)
m → Minutes (0 to 59)
Your task is to convert this time into 12-hour format and print the result in the form:

{converted_hour}:{minutes} AM/PM*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int hour, sec, h;
    scanf("%d %d", &hour, &sec);
        
    if(hour >= 12 && sec<=59){
        if(hour==12 && sec >=0)
        {
            if(sec<10)
            {
                printf("%d:0%d PM", hour, sec);
            }
            else
            {
                printf("%d:%d PM", hour, sec);
            }
        }
        else
        { 
            h=hour-12;
            
            if(sec<10)
            {
               printf("%d:0%d PM", h, sec);
            }
            else
            {
                printf("%d:%d PM", h, sec);
            }
        }
    }
    else if(hour==0 && sec<=59){

            if(sec<10)
            {
               printf("12:0%d AM",sec);
            }
            else
            {
              printf("12:%d AM",sec); 
            }
    }
    else if(hour<=12 && sec<=59){

            if(sec<10)
            {
               printf("%d:0%d AM",hour,sec);
            }
            else
            {
             printf("%d:%d AM",hour,sec);
            }
        
    }

    return 0;
}