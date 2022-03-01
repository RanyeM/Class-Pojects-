//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 7 Lab 2
//Date: 10/14/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

float avg(float a[], int a_size){
  int sum = 0; 
  int i; 
  
  for(i = 0; i < a_size; i++){
    sum += a[i];
  }

  return sum / (float)a_size;
}

int main() {
  int i;
  float a[5];

  printf("Please enter 5 number: ");

  for(i = 0; i < 5; i++){
    scanf("%f", &a[i]);
  }

  printf("The average of the numbers is %3.2f ", avg(a, 5));

  return 0;
}