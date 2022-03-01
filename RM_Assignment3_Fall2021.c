/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Assignment 3 
//Date: September 17, 2021 

#include <stdio.h>
#include <math.h> 

int main()
{
    //declare and intialize 
    int shape, triangle, rectangle, x1, y1, x2, y2, x3, y3, x4, y4, point, pointer, A; 
    float area, areaA, a1, a2, a3; 

    //ask user input 
    printf ("Please enter the shape of the region of intrest, 1:Rectanle or 2:Triangle: \n"); 
    scanf ("%d", &shape); 
    
        
    //calculate 
    if (shape == 1){ 
        printf ("Please enter (x,y) cordinates of v1,v2, and v3 for Rectangle: \n");
        scanf("%d,%d\n %d,%d\n %d,%d\n %d,%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        
    }
    else if (shape == 2){
        printf ("Please enter (x,y) cordinates of v1,v2, and v3 for Triangle: \n");
        scanf("%d,%d\n %d,%d\n %d,%d", &x1, &y1, &x2, &y2, &x3, &y3);
    }
    else{
        printf("The number is invalid!Please try again. \n");
        
    } 
    
    
    printf ("Enter the (x,y) coordinates of the point: \n");
    scanf ("%d", &point);

  
    
    return 0;
}
