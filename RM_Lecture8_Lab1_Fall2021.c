//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 8 Lab 1
//Date: 10/25/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void Sort(int nums[], int nums_length)
{
  for(int i = 0; i < nums_length-1; i++)
  {
    for(int j=i+1; j < nums_length; j++)
    {
      if (nums[j]<nums[i])
      {
        //swap values
        int temp = nums[j];
        nums[j] = nums[i];
        nums[i] = temp;
      }
    }
  }
}

void PrintArray(int nums[], int nums_length)
{
  for (int i = 0; i < nums_length; i++) printf("%d\n", nums[i]);
  printf("---------------\n");
}

int main(void) {
  int nums[10] = {2,5,1,8,4,7,2,8,1,0};

  for (int i = 0; i < 10; i++)
  {
    Sort(nums,10);
    PrintArray(nums,10);
  }
  return 0;
}