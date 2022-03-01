/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 6 Lab 1
//Date: September 30, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>

int square(int x)
    {
        return x*x;
    }
        
        
int main()
{
    int x, y, sum; 
   
    printf("Please enter two nunbers: ");
    scanf("%d %d", &x, &y); 

    
    printf("%d", square(x) + square(y));
    
    return 0;
}

