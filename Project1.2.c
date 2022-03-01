#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAP_HEIGHT 78
#define MAP_WIDTH 22
#define gotoxy(x,y)


int ReadMap(int map[MAP_HEIGHT][MAP_WIDTH])
{
  FILE* fp = fopen("map_1(1).txt", "r");
	char ch;
  int i=0;
  int j=0;

  printf("It works");

	if (fp == NULL) printf("Error!");

  for (i=0; i < MAP_HEIGHT; i++)
  {
    for (j=0; j < MAP_WIDTH; j++)
    {
      if (ch == 'X') map[i][j] = 1;
    }
  }
  return 1;
}

void DisplayMap(int map[MAP_HEIGHT][MAP_WIDTH])
{
  FILE* fp = fopen("map_1.txt", "r");
  int i=0;
  int j=0;
  char ch; 

  printf("ITS WORKS");
  for (i=0; i < MAP_HEIGHT; i++)
  {
    for (j=0; j < MAP_WIDTH; j++){
    while ((ch = fgetc(fp)) != EOF) {
    if (ch == ' '){printf("#");} 
    else if (ch == 'X' ){
     printf(" ");
		}
 if (ch == '\n') printf("\n");
}}}}

int main()
{
  FILE* fp;
  int map[MAP_HEIGHT][MAP_WIDTH] = {0};
  ReadMap(map);
  DisplayMap(map);



    
	return 0;
}