//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 9 Lab 1
//Date: 10/29/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void Swapnumbers(double *n1, double *n2){
  double v = *n1;

  *n1 = *n2;
  *n2 = v;
}

int main(void) {
  double n1 = 12.5;
  double n2 = 10.1; 

  printf("Before: \n n1 = %lg\n n2 = %lg\n", n1, n2);

  Swapnumbers(&n1,&n2); 

  printf("Before: \n n1 = %lg\n n2 = %lg\n", n1, n2);

  return 0;
}