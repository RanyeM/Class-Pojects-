/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409
//Assignment: Quiz 5
//Date: October 7, 2021 

//https://drive.google.com/file/d/1GW2ChQFcyrScyfb2LYS4lm33E0ylr_Mm/view?usp=sharing


#include <stdio.h>
#include <math.h> 


int main()
{
    int num; 
    int count = 0; 
    
    printf("Please enter dollar amount (as a whole number): $");
    scanf("%d", &num); 
    
    while(num != 0)
    {
        num=num/10; 
        count++;
    }
    
    printf("The number of digit is: %d", count); 

    return 0;
}

