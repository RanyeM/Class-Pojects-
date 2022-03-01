//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 7 Lab 4
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

int Getinput(float a[], int a_length){
  int i; 

   printf("Please enter up to %d numbers (enter -1 to end): ", MAX_ARRAY_LENGTH);

  for(i = 0; i < MAX_ARRAY_LENGTH; i++){
    scanf("%f", &a[i]);
    if(a[i] < 0) break; 
  }

  return i;
}

int main() {
  float a[MAX_ARRAY_LENGTH];
  int a_count;

  a_count = Getinput(a,MAX_ARRAY_LENGTH);

  printf("The average of the numbers is %3.2f ", avg(a, a_count));

  return 0;
}