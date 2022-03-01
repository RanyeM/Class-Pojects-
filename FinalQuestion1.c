//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Final Question 1
//Date: 12/16/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMS 10


int Get_Input(int nums[], int num_length){
  int i; 

  //asks the user to enter up to 10 numbers until -1  is entered 
  printf("Please enter up to 10 numbers (enter -1 to end):  "); 

  //to go through each number up to 10 
  for(i = 0; i < MAX_NUMS; i++){
    scanf("%d", &nums[i]); 

    printf("Please enter up to 10 numbers (enter -1 to end):  "); 

    //if -1 is entered, exit the loop 
    if(nums[i] < 0) break; 
  }
  //returning the array 
  return i; 
}

void Reverse(int *Nums, int nums_length){
  //initializing pointer in the declaration 
  int *r = Nums; 
  int *reverse = Nums + nums_length - 1; 

  //loop to swap or reverse array contents and go through each number until it reaches the end of the array 
  while(r <= reverse){
    int temp = *r;
    *r = *reverse; 
    *reverse = temp; 
    r++; 
    reverse--;
  }
}


void Display_Nums(int nums[], int nums_length){
  int i; 

  for (i = 0; i < nums_length; i++) printf("%d", nums[i]);
}



int main(void) {
    int nums[MAX_NUMS];
    int nums_length = 0; 

    //Read up to 10 positive integers 
    nums_length = Get_Input(nums, MAX_NUMS);

    //Reverse the numbers using the pointer arithmetic 
    Reverse(nums, nums_length); 

    //Display the contents of the array 
    Display_Nums(nums, nums_length);

    getchar();

  return 0;
}