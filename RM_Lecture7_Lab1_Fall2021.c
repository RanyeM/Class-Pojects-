//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 7 Lab 1
//Date: 10/14/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main() {
  int i, j, k; 
  int a[10]; 

printf("Please enter 10 numbers : "); 

for (i = 0; i < 10; i++){
  scanf("%d", &a[i]);
}

printf("The reverse of the numbers are: "); 
for (i = 9; i >= 0; i--){
  printf(" %d ", a[i]);
}
 
  return 0;
}