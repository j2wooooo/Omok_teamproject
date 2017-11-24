#include <stdio.h>
#include <stdlib.h>
#include "getch.h"

#define usr_UP 65 // 방향키 up
#define usr_DOWN 66 // 방향키 down
#define usr_RIGHT 67 // 방향키 right
#define usr_LEFT 68 // 방향키 left

#define put_stone 32// 돌 놓기
extern struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

void mapinfoclean();
void gotoxy(int x, int y); // 키보드 커서를 이동시켜주는 함수
int getch(); // 문자를 입력으로 받을 수 있는 함수
struct map_info mi[20][20]; // 오목판의 커서이동가능 범위가 들어간 map의 정보, map함수와 연동되어야 하기 때문에 전역변수로 쓴다
extern int x; int y; // 현재 키보드 커서의 위치 gotoxy 함수와 연동되어야 하기 때문에 전역변수로 쓴다

int selectplayer();
int istherewinner();
void map_modify();
void usrputstone(int p);
void computstone(int p);

void com2() // user1과 user2가 오목게임을 하는 함수
{
	int player = selectplayer();

	map_modify();
	gotoxy(x,y);

	char ch;
	int color = 2; // black is first
	int winner = 0;

	if(player == 1) // user first
	{
		while(1)
		{
			usrputstone(player);
			computstone(player);
			printf("\n\n\n\n\n\n\n\n\n\n");
			for(int i = 0; i < 20; i++)
			{
				for(int j = 0; j < 20; j++)
				{
					printf("%d", mi[i][j].color);
				}
				printf("\n");
			}
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
