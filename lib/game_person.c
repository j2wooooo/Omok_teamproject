#include <stdio.h>
#include <stdlib.h>
#include "getch.h"

int getch();
extern int map_info[20][40];
void gotoxy(int x, int y);
//int m=10; int n=10;
int color = 2;
extern int x; int y;

void game_person()
{
	char dir;

	while (1) {
		dir = getch();
		switch (dir) {
		case 'w':
			//if (m - 1 != 0)
			//	n -= 1;
			if(x-1 > 1)
				x-=1;
			break;
		case 'a':
			//if (n - 2 != 0)
			//	m -= 2;
			if(y-2 > 0)
				y -= 2;
			break;
		case 's':
			//if (m + 1 != 20)
			//	n += 1;
			if(x+1 < 20)
				x += 1;
			break;
		case 'd':
			//if (n + 2 != 20)
			//	m += 2;
			if(y+2 < 40)
				y += 2;
			break;
		case ' ':
			if (map_info[x][y] == 0)
			{
				if (color == 1) {
					printf("○");
					map_info[x][y] = 1;
				//	a[x][y] = 1; // color
					color = 2;
				}
				else if (color == 2) {
					printf("●");
					map_info[x][y] = 1;
				//	a[x][y] = 2; // color
					color = 1;
				}
			}
		}
		if (map_info[x][y] != 1)
		{
			gotoxy(x,y);
			//printf("%d %d\n", x,y);
		}
	}
}
