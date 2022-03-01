//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 10 Lab 2
//Date: 11/29/2021

#include <stdio.h>
#include <string.h>

void swap(char *c1, char *c2){
  char temp = *c1;
  *c1 = *c2;
  *c2 = temp;
}

void reverse(char *r){
  for(int i = 0; i < strlen(r)/2; i++ ){
    swap(&r[i], &r[strlen(r)-1-i]);
  }
}



int main(void) {
  
  char myschool[] = "Morgan State University"; 

  reverse(myschool);
  printf("%s" , myschool);


  
  return 0;
}