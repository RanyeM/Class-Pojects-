//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Quiz 10
//Date: 10/29/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {
  char string1[] = "The"; 
  char string2[30]; 
  strcpy(string2,string1);

  while(1){
    printf("Please enter a string (hit enter key without entering any characters to exit): \n"); 
    fgets(string2, 30, stdin); 
    string2[strlen(string2)-1] = 0;

   if(){
     break;
   }
   strcat(string1,"");
   strcat(string1, string2);

  }

  printf("%s", string1);

  return 0;
}