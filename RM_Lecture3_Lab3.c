/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 317 
//Assignment: Lecture 3 Lab 3 
//Date: September 17, 2021 


#include <stdio.h>
#include <math.h> 

int main()
{
    //declare and initialize 
    int gauge;
    float rho; 
    
    //asking user for input values 
    printf ("Enter the wire gauge (12,14,16, or 18): \n");
    scanf ("%d", &gauge); 
    
    //calculate 
    if (gauge == 12) rho = 5.211;
    else if (gauge ==14) rho = 8.285;
    else if (gauge == 16) rho = 13.170;
    else if (gauge == 18) rho = 20.950;
    else (rho = -1); 
    
    //display 
    if (rho != -1) printf ("The resistivity of a wire with gauge %d is %f: \n", gauge, rho); 
    else printf ("%d is an invalid guage!", gauge); 
        
    return 0;
}
