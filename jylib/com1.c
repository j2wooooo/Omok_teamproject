#include <stdio.h>
#include "../include/map.h"
#include "../include/getch.h"
#include "../include/gotoxy.h"
#include "../jyinclude/checkblack.h"
#include "../jyinclude/checkwhite.h"
#include "../jyinclude/whitemap.h"
#include "../jyinclude/mode.h"
#include "../jyinclude/attack.h"
#include "../jyinclude/defend.h"
#include "../jyinclude/winner.h"

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

void com1()
{
	int flag = 0; // 0->user, 1->com
	char dir;
	int fin;

	while(1)
	{
		if(flag == 0)
		{
			dir = getch();
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
					map_info[x][y/2] = BLACK;
                                	printf("●");
					flag = 1; // com turn
                        	}
               		}
			gotoxy(x, y);
		}
		else // com mode
		{ 
			checkblack();
			checkwhite();
                        whitemap();

			gotoxy(21,0);
			if(mode())
			{
				printf("defend");
				defend();
			}
			else
			{
				printf("attack");
				attack();
			}

			checkwhite();
                        whitemap();

			flag = 0; // user turn
		}

		fin = winner();
		if(fin == 1)
		{
			gotoxy(21, 0);
			printf("USR WIN!");
		}
		if(fin == 2)
		{
			gotoxy(21, 0);
			printf("COM WIN!");
		}
	}
}
