#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAP_HEIGHT 78
#define MAP_WIDTH 22
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#include <unistd.h>

void ReadMap(int map[MAP_HEIGHT][MAP_WIDTH])
{
  FILE *fp = fopen("map.txt", "r");
	char ch;
  int i;
  int j;

	if (fp == NULL) printf("Error!");

  for (i=0; i < MAP_HEIGHT; i++)
  {
    for (j=0; j < MAP_WIDTH; j++)
    {
      if (ch == 'X') map[i][j] = 1;
    }}}


void DisplayMap(int map[MAP_HEIGHT][MAP_WIDTH])
{
  FILE *fp = fopen("map.txt", "r");
  int i;
  int j;
  char ch; 

  for (i=0; i < MAP_HEIGHT; i++)
  {
    for (j=0; j < MAP_WIDTH; j++){
    while ((ch = fgetc(fp)) != EOF) {
    if (ch == ' '){printf("#");} 
    else if (ch == 'X' ){
     printf(" ");
		}
    if (ch == '\n') printf("\n");
  }  gotoxy(14,2); printf("\033[%d;%dH@", (14), (2)); 

	}}}
  
  void MoveRobot(int map[MAP_HEIGHT][MAP_WIDTH]){
    FILE *fp = fopen("map.txt", "r");
    int i,j,k,l,x;
    int east, west, north, south = 0; 
    char ch; 
  
    
  //move east in increments of 1
   if (getchar() == '\n') {
     for (i=0; i < east; i++ ){
       if (ch == ' '){
         i++; 
       }
       else if (ch == '#'){
         exit(1); 
       } 
     }

     printf("\033[%d;%dH.", (14), (2));
     printf("@");

     //gotoxy(14,3); printf("\033[%d;%dH@", (14), (3));
}}
      

int main()
{
  int map[MAP_HEIGHT][MAP_WIDTH] = {0};
  ReadMap(map);
  DisplayMap(map);
  MoveRobot(map); 
 
	return 0;
}