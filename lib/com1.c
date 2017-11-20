#include <stdio.h>
#include "map.h"
#include "getch.h"
#include "gotoxy.h"

#define BLACK 1
#define WHITE 2

extern int map_info[20][20];
extern int x; int y;

int black = 0; // num of black stones
int check[20][40]; // 행과 열의 흑돌 개수를 카운트하여 배열에 저장

// 행과 열의 흑돌의 개수 카운트
void checkblack(int x, int y)
{
	int c = 0; // index of column
	int x1 = x; int x2 = y;
	for(int x1 = 0; x1 < 20; x1++){
		for(int y1 = 0; y1 < 40; y1+=2){
			if(map_info[x1][y1] == 1){
				black++;
			}
		check[x1][c] = black;
		c++;
		black = 0;}
	}
}

void com1()
{
	int flag = 0; // 0->user, 1->com
	char dir;

	while(1){
		if(flag == 0){
			dir = getch();
                	switch (dir) {
                	case 'w':
                        	if(x-1 > 1)
                                	x-=1;
                        	break;
                	case 'a':
                        	if(y-2 > 1)
                                	y -= 2;
                        	break;
                	case 's':
                        	if(x+1 < 20)
                                	x += 1;
                        	break;
                	case 'd':
                        	if(y+2 < 40)
                                	y += 2;
                        	break;
                	case ' ':
                       		if (map_info[x][y] == 0)
                        	{ // if empty location
					map_info[x][y] = BLACK;
                                	printf("●");
					flag = 1; // com turn
                        	}
                	}
                        gotoxy(x,y);
		}
		else{ // com mode
			checkblack(x,y);
			flag = 0; // user turn
		}
	}
}
