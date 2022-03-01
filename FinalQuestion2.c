//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Final Question 2
//Date: 12/16/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>





void TitleCase(char a[]){
  int i; 

  //sentence is stored in an array 
  //take string and cap first letter of each word excpet words with a,the,of,in
  for(i = 0; i < strlen(a); i++){
    if(i == 0){
      if(a[i] >= 'a' && a[i] <= 'z') a[i] = a[i] - 32; 
    }
    if(a[i] == ' '){
      ++i;
      if(a[i] >= 'a' && a[i] <= 'z'){
      a[i] = a[i] - 32; 
    }}

    //conditions of lower case letters, a, t, o, i
    if(a[i] == 'A' || a[i] == 'a') a[i] = a[i]+32;
    if(a[i] == 'T' || a[i] == 't') a[i] = a[i]+32;
   
    }
    }



int main(void) {
  char sen[1000]; 


   //ask user to enter a sentence 
  printf("Please enter a sentence: ");
  fgets(sen, 1000, stdin);


  //call TitleCase
  TitleCase(sen);


  //print or display contents with each letter cap
  puts(sen);

  return 0;
}