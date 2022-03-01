/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h> 

int main()
{
    
//Declare and initialize three integer variables and store the number of revolutions for each run 
    int r1 = 10; 
    int r2 = 11; 
    int r3 = 10; 
    
//Declare and initialize one floating point variable and store the radius of the wheel 
//Declare and initialize one floating point variable and store the true distance traveled
//Declare and initialize pi and store variable for pi 
    float radius, truedistance, pi;
    radius = 21;
    truedistance = 1354; 
    pi = 3.14;
    
//Declare and initialize and calculating the distance for each run using formula (2*pi*r) * # of revolutions
    float distance = (2*pi*21) * 10; 
    float distance2 = (2*pi*21) * 11; 
    
//Declare and initialize average using calucaltions 
//Declare and initialize encoder error using fabs() to get absolute value 
//Declare and initialize percent encoder error using calucaltions
    float Average = (distance + distance2 + distance) / 3;
    float encoder = fabs(Average - truedistance);
    float percenterror = (encoder / truedistance) * 100;
    
    
// print formated based on example  
    printf("Radius of the wheel (cm): %.f\n", radius);
    printf("Number of revolutions for run 1: %d\n", r1);
    printf("Number of revolutions for run 2: %d\n", r2);
    printf("Number of revolutions for run 3: %d\n", r3);
    printf("True distance traveled: %.f\n\n", truedistance);
    
//print formated columns and rows 
    printf("RUN         DISTANCE (cm)\n");
    printf("---         ------------- \n");
    printf ("%d                 %.2f\n", 1, distance);
    printf ("%d                 %.2f\n", 2, distance2);
    printf ("%d                 %.2f\n\n", 3, distance);
  
// print formated based on example   
    printf("Average Distance Traveled:     %.2f\n", Average);
    printf("Encoder Error:                 %.2f\n", encoder);
    printf("Percent Encoder Error:         %.1f%\n", percenterror);
    
    return 0;
}
