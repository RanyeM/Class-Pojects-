/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409
//Assignment: Quiz 1 
//Date: September 17, 2021 


#include <stdio.h>
#include <math.h> 

int main()
{
    //declare and intialize 
    float Fahrenheit1, Fahrenheit2, Fahrenheit3, Fahrenheit4, Fahrenheit5, Celsius1, Celsius2, Celsius3, Celsius4, Celsius5, freezingpt, ratio; 
    
    //set temperature, freezingpt, ratio
    Fahrenheit1 = 60.2; 
    Fahrenheit2 = 58.3; 
    Fahrenheit3 = 33.8; 
    Fahrenheit4 = 78.6; 
    Fahrenheit5 = 51.3; 
    
    freezingpt = 32; 
    ratio = 5/9;
    
    //calculate the Celsius
    Celsius1 = (Fahrenheit1 - freezingpt) * ratio; 
    Celsius2 = (Fahrenheit2 - freezingpt) * ratio;
    Celsius3 = (Fahrenheit3 - freezingpt) * ratio; 
    Celsius4 = (Fahrenheit4 - freezingpt) * ratio; 
    Celsius5 = (Fahrenheit5 - freezingpt) * ratio;
    
    //display 
    printf ("Temperature Values \n"); 
    printf (" \t\tFahrenheit \t\tCelsius \n"); 
    printf (" \t\t---------- \t\t------- \n"); 
    printf ("Data point 1 \t|   %.2f | \t\t| %.2f | \n", Fahrenheit1, Celsius1);
    printf ("Data point 2 \t|   %.2f | \t\t| %.2f | \n", Fahrenheit2, Celsius2); 
    printf ("Data point 3 \t|   %.2f | \t\t| %.2f | \n", Fahrenheit3, Celsius3); 
    printf ("Data point 4 \t|   %.2f | \t\t| %.2f | \n", Fahrenheit4, Celsius4); 
    printf ("Data point 5 \t|   %.2f | \t\t| %.2f | \n", Fahrenheit5, Celsius5); 
    
  

    return 0;
}
