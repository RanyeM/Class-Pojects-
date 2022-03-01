/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 4 Lab 3  
//Date: September 17, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing


#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0; 
    int num = 0; 
    
    printf("Please enter a number: \n"); 
    scanf("%d", &num); 
    
    printf("This program outputs a table of squares: \n");
    for (i = 0; i <= num; i++)
    {
        printf("%3d  %6d\n", i, i*i); 
    }
    
    getchar();
    getchar();
    
    return 0;
}

