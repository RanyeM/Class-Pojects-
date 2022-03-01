/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//folder-https://drive.google.com/drive/folders/18E8qTrm7GkGspjJqzp71JcOZYot3_YUs?usp=sharing

#include <stdio.h>
#include <math.h>

int main()
{
    //Declare and Initialize 
    int x = 1; //point[1,5]
    int y = 5; 
    
    int x2 = 4; //point[4,7]
    int y2 = 7; 
    
    //Finding distance between points, declare and intialize 
    
    int xdistance = x2-x; 
    int ydistance = y2-y; 
    
    float distance = sqrt(xdistance*xdistance + ydistance*ydistance);
    
    printf("The distance between the points (%d,%d), (%d,%d) is %.2f",x,y,x2,y2,distance);

    return 0;
}
