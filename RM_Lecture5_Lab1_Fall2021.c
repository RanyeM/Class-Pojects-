/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 5 Lab 2
//Date: September 30, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h>

int main()
{
    char c; 
    char row;
    char column;
    
    for (c = 'A'; c <= 'Z'; c++)
    {
        printf("\t");
        printf("%c\t%c\n", c,c+32) ;  
    }
    
    printf("\n");

    return 0;
}
