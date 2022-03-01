/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float Velocity, Acceleration, Time;
    
    Time = 3.25; 
    Velocity = (0.0001 * (Time * Time * Time)) - (0.00488 * (Time *Time)) + (0.75796 * Time) + 181.3566; 
    Acceleration = 3 - 0.000062 * (Velocity * Velocity); 
   
    
    printf("Velocity = %.2f m/s \n", Velocity);
    printf("Acceleration = %.2f m/s^2 \n", Acceleration); 
    

    return 0;
}
