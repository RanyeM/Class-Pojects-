/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409
//Assignment: Lecture 4 Lab 2 
//Date: September 17, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h> 

int main()
{
    int num = -1;
    int count; 
    
    do { 
        printf("Please enter a number: \n");
        scanf("%d", &num);
        while (getchar() != '\n');
    
    } while (num < 0);
    
    while(num>0)
    {
        num /= 10; 
        count++; 
    }
    
    printf("The number of digits is %d.",count); 
    return 0;
}

