/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 5 Lab 3
//Date: September 30, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h>

int main()
{
    char a; 
    
    printf("Please enter some characters: \n");
    
    do 
    {
        scanf("%c", &a);
        if (a >= 'a' &&  a <= 'z') a = a-32; 
        printf("%c", a);
    }while (a != '\n'); 

    return 0;
}