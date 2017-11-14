#include <stdio.h>
#include <stdlib.h>
#include "getch.h"

#define usr1_UP 119 // 방향키 w
#define usr1_DOWN 115 // 방향키 s
#define usr1_RIGHT 100 // 방향키 d
#define usr1_LEFT 97 // 방향키 a

#define usr2_UP 65 // 방향키 up
#define usr2_DOWN 66 // 방향키 down
#define usr2_RIGHT 67 // 방향키 right
#define usr2_LEFT 68 // 방향키 left

#define put_stone 32// 돌 놓기


int getch();
extern int map_info[20][20];
void gotoxy(int x, int y);
extern int x; int y;

void game_person()
{
	char ch;
	int color = 2;

	while (1) {

		ch = getch();

		switch (ch) {
		case usr1_UP:
			if(x-1 > 1)
				x-=1;
			break;
		case usr1_LEFT:
			if(y-2 > 1)
				y -= 2;
			break;
		case usr1_DOWN:
			if(x+1 < 20)
				x += 1;
			break;
		case usr1_RIGHT:
			if(y+2 < 40)
				y += 2;
			break;
                case usr2_UP:
                        if(x-1 > 1)
                                x-=1;
                        break;
                case usr2_LEFT:
                        if(y-2 > 1)
                                y -= 2;
                        break;
                case usr2_DOWN:
                        if(x+1 < 20)
                                x += 1;
                        break;
                case usr2_RIGHT:
                        if(y+2 < 40)
                                y += 2;
                        break;

		case put_stone:
			//if (map_info[x][y/2] == 0)
			//{
				if (color == 1) {
					printf("○");
				//	map_info[x][y] = 1;
				//	a[x][y] = 1; // color
					color = 2;
				}
				else if (color == 2) {
					printf("●");
				//	map_info[x][y] = 1;
				//	a[x][y] = 2; // color
					color = 1;
				}
			//}
			}
		//if (map_info[x][y/2] != 1)
		//{
			gotoxy(x,y);
			//printf("%d %d\n", x,y);
		//}
	}
}
