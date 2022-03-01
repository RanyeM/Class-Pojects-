//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Quiz
//Date: 11/12/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int get_input(int *nums, int max_size){
  int i; 

  printf("Please enter up to %d positive integers values: \n ", max_size); 
  scanf("%d", nums);
  
  for (i = 0; i < max_size; i++){
    if (i < 0) printf("Please enter only positive integers");

  }
   return i; 
}

//int get_count(int *nums, int size, int threshold, int *returnNums){}


int main(){


  get_input(nums,10 );
  //get_count();
}
