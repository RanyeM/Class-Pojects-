#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAP_HEIGHT 78
#define MAP_WIDTH 22
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
#define east 1
#define west 2
#define north 3
#define south 4
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
  
  void MoveRobot(int map[MAP_HEIGHT][MAP_WIDTH], int X, int Y, int Direction, int lastPosition[]){
    FILE *fp = fopen("map.txt", "r");
    int i,j;
    int *place;
    int move = 0;
    int lastPositionx, lastPositiony;
    char ch; 


  //increase by 1 in east
if (getchar() == '\n') {
      for (i=0; i < east; i++ ){
       if (ch == ' '){
         i++; 
         sleep(1);
        
       }
       else if (ch == '#'){
         exit(1); 
       } 
        gotoxy(14,2); printf("\033[%d;%dH.", (14), (2)); 
        gotoxy(14,3); printf("\033[%d;%dH.", (14), (3));
        gotoxy(14,4); printf("\033[%d;%dH.", (14), (4));
        gotoxy(14,5); printf("\033[%d;%dH.", (14), (5));
        gotoxy(14,6); printf("\033[%d;%dH.", (14), (6)); 
        gotoxy(14,7); printf("\033[%d;%dH.", (14), (7));
        
      }}

 
  //increase by 1 in north
if (getchar() == '\n') {
      for (i=0; i < north; i++ ){
       if (ch == ' '){
         i++; 
         sleep(1);
        
       }
       else if (ch == '#'){
         exit(1); 
       } 
      gotoxy(14,8); printf("\033[%d;%dH.", (14), (8));
      gotoxy(13,8); printf("\033[%d;%dH.", (13), (8));
      gotoxy(12,8); printf("\033[%d;%dH.", (12), (8));
      gotoxy(11,8); printf("\033[%d;%dH.", (11), (8));
      gotoxy(10,8); printf("\033[%d;%dH.", (10), (8));
      }}

  //increase by 1 in east
if (getchar() == '\n') {
      for (i=0; i < east; i++ ){
       if (ch == ' '){
         i++; 
         sleep(1);
        
       }
       else if (ch == '#'){
         exit(1); 
       } 
      gotoxy(10,9); printf("\033[%d;%dH.", (10), (9));
      gotoxy(10,10); printf("\033[%d;%dH.", (10), (10));
      gotoxy(10,11); printf("\033[%d;%dH.", (10), (11));
      gotoxy(10,12); printf("\033[%d;%dH.", (10), (12));
      gotoxy(10,13); printf("\033[%d;%dH.", (10), (13));
      gotoxy(10,14); printf("\033[%d;%dH.", (10), (14));
      gotoxy(10,15); printf("\033[%d;%dH.", (10), (15));
      gotoxy(10,16); printf("\033[%d;%dH.", (10), (16));
      gotoxy(10,17); printf("\033[%d;%dH.", (10), (17));
      gotoxy(10,18); printf("\033[%d;%dH.", (10), (18));
      printf("@");
      exit(0);
      }}

      
     } 

  void ExploreMap(int map[MAP_HEIGHT][MAP_WIDTH], int X, int Y, int Direction, int lastPosition[]){
    MoveRobot(map,14,2, east, lastPosition);    
  }

int main()
{
  int map[MAP_HEIGHT][MAP_WIDTH] = {0};
  ReadMap(map);
  DisplayMap(map);
  int lastPosition[4];
  ExploreMap(map,14,2, east, lastPosition);

  
 
 
	return 0;
}