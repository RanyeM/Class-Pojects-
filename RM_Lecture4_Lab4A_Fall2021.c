/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 4 Lab 4A 
//Date: September 30, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h>

int main()
{
    //declare and intialize
    int row; 
    int column; 
    int dimension; 
    
    //asks the user for the dimension
    printf("Please enter the dimension: \n"); 
    scanf("%d", &dimension); 
    
    //for loop for the row and columns in the table 
    for (row = 1; row <= dimension; row++){ 
        for (column = 1; column <=dimension; column++) printf ("\t%d", row * column); 
        printf("\n"); 
    }
    printf("\n\n"); 
    return 0; 
}
    
