#include <stdio.h>
#include <stdlib.h>
#include "getch.h"

int getch();
int map_info[20][20];
void gotoxy(int x, int y);
int m=10; int n=10;
int color = 2;

void game_person()
{
	char dir;

	while (1) {
		dir = getch();
		switch (dir) {
		case 'w':
			if (m - 1 != 0)
				n -= 1;
			break;
		case 'a':
			if (n - 2 != 0)
				m -= 2;
			break;
		case 's':
			if (m + 1 != 20)
				n += 1;
			break;
		case 'd':
			if (n + 2 != 20)
				m += 2;
			break;
		case ' ':
			if (map_info[m][n] == 0)
			{
				if (color == 1) {
					printf("○");
					map_info[m][n] = 1;
				//	a[x][y] = 1; // color
					color = 2;
				}
				else if (color == 2) {
					printf("●");
					map_info[m][n] = 1;
				//	a[x][y] = 2; // color
					color = 1;
				}
			}
		}
		if (map_info[m][n] != 1)
		{
			gotoxy(m,n);
		}
	}
}
