//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Quiz 7 
//Date: 10/25/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void CovertToCelsius(int Fahrenheit[], int Celsius[], int value){
  for(int i = 0; i < value; i++){
    int celsius = (Fahrenheit[i] -32) * 5/9;
    Celsius[i] = celsius;
  }
}

int main() {
  FILE *fp = fopen("data_win.txt", "r");
  int num;
  int i = 0; 



  if (fp == NULL){
    printf("Error opening file");
  }
  else
  {
    printf("Fahrenheit\n");
    printf("----------\n");
    while(fscanf(fp, "%d", &num) != EOF)
    {
      printf("%d\n", num);
    }

    printf("\nCelsius\n");
    printf("----------\n");
    
  }


  return 0;
}