//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 7 Lab 3
//Date: 10/14/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ARRAY_LENGTH 10

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
  float a[MAX_ARRAY_LENGTH];

  printf("Please enter up to %d numbers (enter -1 to end): ", MAX_ARRAY_LENGTH);

  for(i = 0; i < MAX_ARRAY_LENGTH; i++){
    scanf("%f", &a[i]);
    if(a[i] < 0) break; 
  }

  printf("The average of the numbers is %3.2f ", avg(a, i));

  return 0;
}