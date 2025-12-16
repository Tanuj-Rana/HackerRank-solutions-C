/*A university offers three engineering streams, each represented by a character code:

Code    |   Stream
 C      |    CSE
 E      |    ECE
 M      |    MECHANICAL
Each stream has a fixed curriculum based on the current academic year (1–4).
Additionally, in 4th year, students may choose an internship instead of regular subjects.
You are given three inputs:

a. YEAR — integer in {1, 2, 3, 4} 
b. BRANCH_CODE — character in {C, E, M}
c. If 4th Year: Additional Input: INTERNSHIP_STATUS — integer {0 or 1}
    - 0 → print the regular subjects
    - 1 → print “Enrolled into Internship Program”
Your task is to print the correct set of subjects based on these inputs.

NOTE:

Use only SWITCH statements, if-else statments are NOT allowed.
For checking internship status also - use SWITCH statement only.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int year,intern;
   char branch;
    
    
   scanf("%d %c",&year,&branch);
    
    switch (year) {
        case 1: printf("Physics\nChemistry\nMaths"); 
              break;
        case 2: switch(branch){
            case 'C':printf("C Programming\nComputer Organization & Architecture\nWeb Development");
                break;
            case 'E':printf("Signal Processing\nLogic Design\nNetwork Analysis");
                break;
            case 'M':printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
                break;
            default:printf("-1");
                break;
                          
            }
            break;
        case 3: switch(branch){
            case 'C':printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms");
                   break;
            case 'E':printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
                   break;
            case 'M':printf("Applied Mechanics\nKinematics\nMechatronics");
                   break;
            default:printf("-1");
                   break;
             
            } 
            break;
        case 4: 
            scanf("%d",&intern);
            switch(intern){
                case 1:printf("Enrolled into Internship Program");
                    break;
                case 0: switch(branch){
                   case 'C':printf("Operating System\nComputer Networks\nCompiler Design");
                        break;
                   case 'E':printf("VLSI Design\nFibre-optics Communication\nDigital Electronics");
                        break;
                   case 'M':printf("Mechanics of Materials(MOM)\nStrength of Materials(SOM)\nMachine Design" );
                      break; 
                 default:printf("-1");
                   break;
                }
                 break;
            default:printf("-1");
                   break;
            }
            break;
            
        default:printf("-1");
                   break;
   
    }
    

    return 0;
}