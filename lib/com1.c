#include <stdio.h>
#include "map.h"
#include "getch.h"
#include "gotoxy.h"

#define USR_UP 119 // 방향키 up
#define USR_DOWN 97 // 방향키 down
#define USR_RIGHT 100 // 방향키 right
#define USR_LEFT 115 // 방향키 left
#define PUT_STONE 32 // 돌 놓기

#define BLACK 1
#define WHITE 2

int mymap[20][40];
int x; int y;
int black = 0; // num of black stones

// 행과 열의 흑돌의 개수 카운트
void checkblack(int x, int y)
{
	int row[20]; // 행과 열의 흑돌 개수를 카운트하여 배열에 저장
	int column[20];
	int x1 = x; int x2 = y; // tmp x, y

	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 40; j+=2){
			printf("%d ", mymap[i][j]);
		}
		printf("\n");
	}

	for(int x1 = 0; x1 < 20; x1++){ // check column
		for(int y1 = 0; y1 < 40; y1+=2){
			if(mymap[x1][y1] == BLACK){
				black++;
			}
		row[x1] = black;
		black = 0;
		}
	}
	for(int y1 = 0; y1 < 40; y1+=2){ // check row
                for(int x1 = 0; x1 < 20; x1++){
                        if(mymap[x1][y1] == 1){
                                black++;
                        }
                column[y1] = black;
                black = 0;
		}
        }


	for(int i = 0; i < 20; i++)
		printf("%d ", row[i]);
	printf("\n");
	for(int i = 0; i < 20; i++) 
                printf("%d ", column[i]);
}

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
                       		if (mymap[x][y] == 0) // if empty location
                        	{
					mymap[x][y] = BLACK;
                                	printf("●");
					flag = 1; // com turn
                        	}
                	}
		}
		else // com mode
		{ 
			checkblack(x,y);
			flag = 0; // user turn
		}
	}
}
