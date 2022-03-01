/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Assignment 5
//Date: 10/11/2021




#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//countdown function
void countdown()
{
  //declare and initalize 
  int guess, count = 0;
  int max = 100;
  int min = 1;
  int age= (int)((rand()/(float)RAND_MAX* (max-min)) + min);
  srand(time(0));
  int random = rand() % 100 + 1;
  char Y, N, L, H, h, l ,n, y, ch;

  //display first age guess 
  printf("I can guess your age! \n"); 
  printf("Is your age  %d (Y/N): \n", random);
  scanf("%c", &ch);

  //condition on if user input is Y/N 
  if (ch == 'Y' || ch == 'y')
  {
    printf("Hooray! It only took %d tries.", count + 1);
  }
  else
  {
    printf("Is your age lower or higher than  %d (L/H): \n", random);
    scanf("%c", &ch);
  }

  //condition on if user is L/H
  if (ch == 'L' || ch == 'l')
    {
      printf("Is your age lower or higher than  %d (L/H): \n", random - 10);
      scanf("%c", &l);
    }
  else if (ch == 'H' || ch == 'h')
  {
    printf("Is your age lower or higher than  %d (L/H): \n", random + 10);
      scanf("%c", &h);
  }

  if (ch == 'l'|| ch == 'h')    
  {        
    countdown();    
  }

}

int main ( )
{
  countdown();    
  return 0;
}
