/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409
//Assignment: Quiz 4 
//Date: October 1, 2021 

//https://drive.google.com/file/d/1GW2ChQFcyrScyfb2LYS4lm33E0ylr_Mm/view?usp=sharing


#include <stdio.h>
#include <math.h> 


int main()
{
    //declare and intialize
    int i, num; 
    int factorial = 1;
    
    
    //asks for user input 
    printf("Please enter a number of factorials (1-10): ");
    scanf("%d", &num); 

    //loop for if factorial is not between 1 and 10, ask user again for input until it is
    while(1)
    {
        if (num < 1 || num > 10)
        {
            printf("INVALID INPUT. Please enter a numbe between 1 and 10. "); 
            printf("Please enter a number of factorials (1-10): ");
            scanf("%d", &num);
        }
        else 
        { 
            break; 
        }
    } 
    
    //print table with columns 
    printf("Table of Factorials \n\n");
    printf("Number\tFactorial\n");
    printf("------\t---------\n");
    
    //loop for calculating factorial to be inserted in the table above 
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
        printf("%d\t%d\n", i, factorial ); 
    }
    
    return 0;
}
