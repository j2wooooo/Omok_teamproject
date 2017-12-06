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
	system("clear");
	map_modify(); // draw map
	int exitflag = 0;
	char ch;

	gotoxy(11,50);
	printf("메뉴로 돌아가기 [z]");

	gotoxy(x,y);

	int color = 2; // black is first
	int winner = 0;

	if(player == 1) // user first
	{
		while(1)
		{
			usrputstone(player);

			winner = istherewinner();

			if(winner == 0){}
			else if(winner == 1)
			{	gotoxy(10, 50);
				printf("winner is user!\n");
				ch = getch();
				switch(ch){
				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}
			}
			else
			{	gotoxy(10,50);
				printf("winner is computer!\n");
				ch = getch();
				switch(ch){
				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}

			}
			if(exitflag == 2) // regame
			{
				exitflag = 0;
				break;
			}

			computstone(player);

			winner = istherewinner();

			if(winner == 0){}
			else if(winner == 1)
			{	gotoxy(10, 50);
				printf("winner is user!\n");
				ch = getch();
				switch(ch){
				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}
			}
			else
			{	gotoxy(10,50);
				printf("winner is computer!\n");
				ch = getch();
				switch(ch){
				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}

			}
			if(exitflag == 2) // regame
			{
				exitflag = 0;
				break;
			}
		}

	}

	else // computer first
	{
		while(1)
		{
			computstone(player);

			winner = istherewinner();

			if(winner == 0){}
			else if(winner == 1)
			{
				gotoxy(10,50);
				printf("winner is computer!\n");
				ch = getch();
				switch(ch){

				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}
			}
			else
			{
				gotoxy(10,50);
				printf("winner is user!\n");
				ch = getch();
				switch(ch){

				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}

			}
			if(exitflag == 2) // regame
			{
				exitflag = 0;
				break;
			}

			usrputstone(player);

			winner = istherewinner();

			if(winner == 0){}
			else if(winner == 1)
			{
				gotoxy(10,50);
				printf("winner is computer!\n");
				ch = getch();
				switch(ch){

				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}
			}
			else
			{
				gotoxy(10,50);
				printf("winner is user!\n");
				ch = getch();
				switch(ch){

				case 'z':
					exitflag = 2;
					mapinfoclean();
					break;
				}

			}
			if(exitflag == 2) // regame
			{
				exitflag = 0;
				break;
			}
		}
	}
}
