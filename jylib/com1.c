#include <stdio.h>
#include "map.h"
#include "getch.h"
#include "gotoxy.h"

#define USR_UP 'w' // 방향키 up
#define USR_DOWN 's' // 방향키 down
#define USR_RIGHT 'd' // 방향키 right
#define USR_LEFT 'a' // 방향키 left
#define PUT_STONE 32 // 돌 놓기

#define BLACK 1
#define WHITE 2

extern int map_info[20][40];
extern int x; extern int y;

void com1()
{
	int flag = 0; // 0->user, 1->com
	char dir;

	while(1){
		if(flag == 0){
			dir = getch();
                	switch (dir) {

                	case USR_UP: if(x-1 > 1) x-=1; break;
                	case USR_LEFT: if(y-2 > 1) y -= 2; break;
                	case USR_DOWN: if(x+1 < 20) x += 1; break;
                	case USR_RIGHT: if(y+2 < 40) y += 2; break;

                	case PUT_STONE:
                       		if (map_info[x][y] == 0) // if empty location
                        	{
					map_info[x][y] = BLACK;
                                	printf("●");
					flag = 1; // com turn
                        	}
                	}
			gotoxy(x, y);
		}
		else // com mode
		{ 
			checkblack(x,y);
			flag = 0; // user turn
		}
	}
}
