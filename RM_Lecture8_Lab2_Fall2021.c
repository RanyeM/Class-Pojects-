//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 8 Lab 1
//Date: 10/25/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Square(double *x, double *y)
{
  *x= *x * *x;
  *y= *y * *y; 

}


int main()
{
  double n = 10; 
  double s = 100; 

  Square(&n, &s); 
  printf("%f %f\n", n, s); 
  
  return 0; 
}
  