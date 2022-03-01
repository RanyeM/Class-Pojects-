/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409
//Assignment: Lecture 6 Lab 2
//Date: October 5, 2021

#include <stdio.h>
#include <math.h> 

double GetInput();
double Square (double n);

int main()
{
    double a, b; 
    
    printf("Please enter the side lengths of the rectangle. \n"); 
    a = GetInput();
    b = GetInput();
    
    printf("The hypotenuse of the right triangle with sides %3.1f and %3.1f is: %3.1f", a, b, sqrt(Square(a) + Square(b))); 
    
    return 0; 
}

double GetInput()
{
    double num; 
    
    do
    {
        printf("Please enter a value: "); 
        scanf("%lg", &num); 
        
        if ( num < 0 || num > 100000) printf("INVALID! Please try again. "); 
        
    }while (num < 0 || num > 100000);
    
    return num; 
}

double Square (double n)
{
    return n * n;
}


