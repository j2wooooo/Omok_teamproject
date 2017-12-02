#include <stdio.h>
#include <stdlib.h>
#include "../include/getch.h" // 문자를 입력으로 받을 수 있는 함수
#include "../include/gotoxy.h" // 키보드 커서를 이동시켜주는 함수
#include "../jwinclude/mapinfoclean.h"
#include "../jwinclude/selectplayer.h"
#include "../jwinclude/istherewinner.h"
#include "../jwinclude/map_modify.h"
#include "../jwinclude/usrputstone.h"
#include "../jwinclude/computstone.h"

struct map_info
{
	int put; // stone's location / available = 1
	int color; // stone's color / black = 1, white = 0
	int dfvalue; // defend value
	int atvalue; // attack value
};

extern struct map_info mi[20][20]; // 오목판의 커서이동가능 범위가 들어간 map의 정보, map함수와 연동되어야 하기 때문에 전역변수로 쓴다
extern int x; int y; // 현재 키보드 커서의 위치 gotoxy 함수와 연동되어야 하기 때문에 전역변수로 쓴다

void com2() // user1과 user2가 오목게임을 하는 함수
{
	int player = selectplayer(); // selcet player 1 = user first, 2 = com first

	map_modify(); // draw map
	gotoxy(x,y); // goto init locaton

	char ch;
	int color = 2; // black is first
	int winner = 0;

	if(player == 1) // user first
	{
		while(1)
		{
			usrputstone(player);
			computstone(player);
			//printf("\n\n\n\n\n\n\n\n\n\n");
			//for(int i = 0; i < 20; i++)
			//{
			//	for(int j = 0; j < 20; j++)
			//	{
			//		printf("%d", mi[i][j].color);
			//	}
			//	printf("\n");
			//}
			int winner = 0;
			winner = istherewinner();

			if(winner == 0){}
			else if(winner == 1)
			{
				printf("winner is user!\n");
			}
			else
			{
				printf("winner is computer!\n");

			}
		}
	}
	else // computer first
	{
		while(1)
		{
			computstone(player);
			usrputstone(player);

			int winner = 0;
			winner = istherewinner();

			if(winner == 0){}
			else if(winner == 1)
			{
				printf("winner is computer!\n");
			}
			else
			{
				printf("winner is user!\n");

			}
		}
	}
}
