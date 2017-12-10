#include <stdio.h>
#include <stdlib.h>

#include "../../include/jjinclude/getch.h"
#include "../../include/jjinclude/gotoxy.h"
#include "../../include/jyinclude/check33.h"

#define USR_UP 65 // 방향키 up
#define USR_DOWN 66 // 방향키 down
#define USR_RIGHT 67 // 방향키 right
#define USR_LEFT 68 // 방향키 left
#define PUT_STONE 32 // 돌 놓기

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];
extern int x; // 현재 커서 위치
extern int y;

void usrput()
{
	while(1)
	{
		char dir = getch();

		switch (dir)
		{
		case USR_UP:
			if(x-1 > 1) x -= 1; break;
		case USR_LEFT:
		        if(y-2 > 1) y -= 2; break;
		case USR_DOWN:
		        if(x+1 < 20) x += 1; break;
		case USR_RIGHT:
		        if(y+2 < 40) y += 2; break;
		case PUT_STONE:
		        if (map_info[x][y/2] == 0) // if empty location 
		    	{
				if(check33(x, y))
				{
					gotoxy(13, 50);
					printf("[3X3] CAN'T PUT");
					gotoxy(x, y);
				}
				else
				{
					map_info[x][y/2] = BLACK;
		               		printf("●");
					return;
				}
			}
		}

		gotoxy(x, y);
	}
}
