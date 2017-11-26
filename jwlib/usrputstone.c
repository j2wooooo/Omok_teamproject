#include<stdio.h>
#include<stdlib.h>
#include "../include/gotoxy.h"
#include "../include/getch.h"
#include "../jwinclude/mapinfoclean.h"

#define usr_UP 65 // 방향키 up
#define usr_DOWN 66 // 방향키 down
#define usr_RIGHT 67 // 방향키 right
#define usr_LEFT 68 // 방향키 left

#define put_stone 32// 돌 놓기
struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

extern int x;
extern int y;

extern struct map_info mi[20][20];

void usrputstone(int player)
{
	int exitflag = 0;
	int flag = 0;

	while (1) { // 키보드 입력을 무한루프를 돌며 받는다

		char ch = getch(); // 키보드 입력을 받는다
			      // 항상 이곳에서 멈춰서 입력을 기다리고 있다

		switch (ch) {
                case usr_UP:
                        if(x-1 > 1)
                                x-=1;
                        break;
                case usr_LEFT:
                        if(y-2 > 1)
                                y -= 2;
                        break;
                case usr_DOWN:
                        if(x+1 < 20)
                                x += 1;
                        break;
                case usr_RIGHT:
                        if(y+2 < 40)
                                y += 2;
                        break;

		case put_stone:
			if (player == 1) {
				printf("○");
				mi[x][y/2].put = 1;
				mi[x][y/2].color = 1;
				flag = 1;

			}
			else{
				printf("●");
				mi[x][y/2].put = 1;
				mi[x][y/2].color = 2;
				flag = 1;

			}
		}
		gotoxy(x,y); // 키보드커서의 위치를 바꾸는 키보드입력이 들어왔다면 커서의 위치를 바꾼다
		//printf("%d %d\n",x,y);
		if(flag == 1)
		{
			break;
		}
	}
	return;
}
