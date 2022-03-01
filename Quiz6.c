//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Quiz 6
//Date: 10/14/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char ch; 

  printf("Enter a phrase: the quick brown fox \n");
  
do 
{
  scanf("%c", &ch); 
  if (ch >= 'a' && ch <= 'z') ch = ch - 32;
  printf("%c", ch);
    
  }while (ch != '\n');

  return 0;
}