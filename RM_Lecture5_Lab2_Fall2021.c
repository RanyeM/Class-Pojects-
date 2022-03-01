/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Lecture 5 Lab 1
//Date: September 30, 2021 

//https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h>

int main()
{
    char character; 
    
    printf("Please enter a character: ");
    scanf("%c", &character);
    
    printf("The character you enetered was: %c\n ", character);
    printf("Its size is: %lu\n ", sizeof(character));
    printf("The ASCI code of the character %c is %d", character, character);
    
  

    return 0;
}
