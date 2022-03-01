/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h> 

int main()
{ 
    //declare and initialize 
    float salinityA, tempuratureA, salinityB, tempuratureB, salinityC, tempuratureC; 
    
    printf("Enter the Salinity and the associated freezing temperature for the data value A: \n");
    scanf("%f %f", &salinityA, &tempuratureA); 
    
    printf("Enter the Salinity and the associated freezing temperature for the data value B: \n");
    scanf("%f %f", &salinityB, &tempuratureB); 
    
    printf("Enter the Salinity for the data value C: \n");
    scanf("%f", &salinityC); 
    
    tempuratureC = tempuratureA + (salinityB - salinityA) / (salinityC - salinityA) + (tempuratureB - tempuratureA); 
    printf(" Th temperature for salinty %f is %f", salinityC, tempuratureC);
   

    return 0;
}
