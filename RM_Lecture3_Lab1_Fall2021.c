/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float n1,n2,n3; 
    
    printf("Please enter three numbers (the biggest number will be printed:  \n");
    scanf("%f \n %f \n %f", &n1,&n2,&n3); 
    
    
    if (n1 > n2) 
    {
        if (n1 > n3)
        {
            printf("Your first number is the biggest number: %f \n", n1);    
        }
        else 
        {
            printf("Your third number is the biggest number: %f \n", n3); 
        }
         
    }
    else if (n2 > n3)
    {
        
        printf("Your second number is the biggest number: %f \n", n2); 
    }
    else 
    { 
        
        printf("Your third number is the biggest number: %f \n", n3);
    }

    return 0;
}


