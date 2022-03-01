//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Lecture 10 Lab 3
//Date: 11/29/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000

int main() {
  //read a string 
  char text[MAX_LENGTH];
  char word[MAX_LENGTH];
  int text_count, word_count; 
  int counter = 0; 
  int j;

  printf("Enter a long sentence: \n");

  fgets(text, MAX_LENGTH, stdin);

  printf("Enter a word to search for: \n"); 

  fgets(word, MAX_LENGTH, stdin); 
  
  word[strlen(word)-1] = 0;

  for (int i = 0; i <strlen(text); i++){
    if (word[0] == text[i]){
      for (j = 1; j < strlen(word); j++){
        if (word[j] != text[i + j]){
          break;
        }
      }
      if (j == strlen(word)){
        counter++;
      }
    }
  }

  printf("The %s occured %d times: ", word, counter);
  // print string


  return 0;
}