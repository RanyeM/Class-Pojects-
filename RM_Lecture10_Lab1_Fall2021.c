//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 10 Lab 1
//Date: 11/29/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  
  char mySchool[] = "Morgan State University";

  for(int i = 0; i < sizeof(mySchool); i++){
    printf("mySchool[%d] = %c'\n", i ,mySchool[i]);
  }

  return 0;
}