#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define HEIGHT 78
#define WIDTH 22
#define gotoxy(x,y)


int main()
{
	FILE* fp = fopen("map_1.txt", "r");
	char ch;

  //int map1;
  //map1 = HEIGHT * WIDTH; 

	if (fp == NULL) {
		printf("Error!");
	}
	else
	{
		while ((ch = fgetc(fp)) != EOF) {
			
    if (ch == ' '){printf("#");} 
    else if (ch == 'X' ){
      printf(" ");
      
		}
    if (ch == '\n') printf("\n");
  }  gotoxy(14,2); printf("\033[%d;%dH", (14), (2));printf("@");
	}
  
   while(1){
    if (getchar() == '\n') {
      gotoxy(14,70); printf("\033[%d;%dH", (14), (70));printf("@"); 
      break;
    }
    
 
	fclose(fp);
	return 0;

}
}