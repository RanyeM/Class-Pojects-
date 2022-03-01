//Name: Ranye Mclendon
//Class: EEGR 409
//Assignment: Final Question 4
//Date: 12/16/2021

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>




//sort numbers in either descending or ascending order 
void SortNumber(int numbers[], int size, int ascending){
  int i,j;
  

   //store numbers in an array and sort numbers 
  // loop for sorting in ascending order 
  if(ascending == 1){
   for(i = 0; i < size; i++){
     for(j= i+1; j < size-i-1; j++){
       //swap  function without function
       if(numbers[j] < numbers[j+1]){
         int temp = numbers[i]; 
         numbers[j] = numbers[j+1];
         numbers[j+1]= temp; 

       }}}}
  //loop for sorting in descending order 
  else{
    for(i = 0; i < size/2; i++){
       //swap  function without function
         int temp = numbers[i]; 
         numbers[i] = numbers[size-i-1];
         numbers[size-i-1]= temp; 
    }}
    
}



int main(void) {
    int a[1000], n; 
    char ch; 
    int count = 0; 

    //Ask user to enter positive integers one at a time/hitting enter key after each entry/-1 to end
    printf("Enter a positive number (enter -1 when done): "); 
    scanf("%d", &n); 

    while(n != -1){
      a[count] = n; 
      count++; 
      printf("Enter a positive number (enter -1 when done): "); 
      scanf("%d", &n); 

    }
      printf("Sort numbers in ascending order (Y/N): \n "); 
      scanf("%c", &ch);
       
    //call sort function, swap and display 
    if (ch == 'Y'){
      SortNumber(a, count, 1); 
    }
    else {
      SortNumber(a, count, 0); 
    }   

    printf("Sorted Numbers: \n"); 
    for(int i = 0; i < count; i++) printf("%d", a[i]); 
   
   



  return 0;
}