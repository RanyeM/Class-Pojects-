/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 4 Lab 1  
//Date: September 17, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h> 

int main()
{
    int n = 0, sum =0, i = 1; 
    
    printf(" Please enter a number: \n"); 
    scanf("%d", &n); 
    
    while (i <= n)
    {
        /* code */ 
    sum = sum + i; 
    i = i + 1; 
    }
    
    printf("This is our sum %d", sum);
    return 0;
}

