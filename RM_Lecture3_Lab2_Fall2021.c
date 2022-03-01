/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    //declare and intialize 
    float eye1, eye2, eye3, nose1, nose2, nose3, ratio1, ratio2, ratio3, diff1_2, diff1_3, diff2_3;
    
    printf("Enter the value for person 1, person 2, and person 3 eyes: \n");
    scanf("%f \n %f \n %f", &eye1, &eye2, &eye3);
    
    printf("Enter the value for person 1, person 2, and person 3 nose: \n");
    scanf("%f \n %f \n %f", &nose1, &nose2, &nose3);


    //calculate ratio 
    ratio1 = eye1 / nose1; 
    ratio2 = eye2 / nose2;
    ratio3 = eye3 / nose3; 
    
    //difference
    diff1_2 = fabs(ratio1 - ratio2);
    diff1_3 = fabs(ratio1 - ratio3);
    diff2_3 =fabs(ratio2 - ratio3);
     
    if (diff1_2 < diff1_3 && diff1_2 < diff2_3){
        printf("Person 1 and Person 2 are identical or may be the same person.");
    }
    else if (diff1_3 < diff2_3 && diff1_3 < diff2_3){
        printf("Person 1 and Person 3 are identical or may be the same person.");
    }
    else { 
        printf("Person 2 and Person 3 are identical or may be the same person.");
    }
    return 0;
}

