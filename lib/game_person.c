#include <stdio.h>
#include <stdlib.h>
#include "../include/getch.h"
#include "../include/gotoxy.h"
#include "../include/mapinfoclean.h"
#include "../include/map_modify.h"
#include "../include/istherewinner.h"
#include "../include/check44.h"

#define usr1_UP 119 // 방향키 w
#define usr1_DOWN 115 // 방향키 s
#define usr1_RIGHT 100 // 방향키 d
#define usr1_LEFT 97 // 방향키 a

#define usr2_UP 65 // 방향키 up
#define usr2_DOWN 66 // 방향키 down
#define usr2_RIGHT 67 // 방향키 right
#define usr2_LEFT 68 // 방향키 left
#define put_stone 32// 돌 놓기

struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

struct map_info mi[20][20]; // 오목판의 커서이동가능 범위가 들어간 map의 정보, map함수와 연동되어야 하기 때문에 전역변수로 쓴다
extern int x;
extern int y; // 현재 키보드 커서의 위치 gotoxy 함수와 연동되어야 하기 때문에 전역변수로 쓴다
void game_person() // user1과 user2가 오목게임을 하는 함수
{

	while(1){

	system("claer");
	map_modify();

	char ch; // 돌 놓을 자리를 움직이기 위한 키보드 입력 받기
	int color = 1; //  color, 1은 black 2는 white

	int exitflag = 0;

	gotoxy(11,50);
	printf("메뉴로 돌아가기 [z]");
	gotoxy(12,50);
	printf("replay [x]");

	gotoxy(x,y);

	while (1) { // 키보드 입력을 무한루프를 돌며 받는다

		ch = getch(); // 키보드 입력을 받는다
			      // 항상 이곳에서 멈춰서 입력을 기다리고 있다

		switch (ch) {
		case usr1_UP:
			if(x-1 > 1)
				x-=1;
			break;
		case usr1_LEFT:
			if(y-2 > 1)
				y -= 2;
			break;
		case usr1_DOWN:
			if(x+1 < 20)
				x += 1;
			break;
		case usr1_RIGHT:
			if(y+2 < 40)
				y += 2;
			break;
                case usr2_UP:
                        if(x-1 > 1)
                                x-=1;
                        break;
                case usr2_LEFT:
                        if(y-2 > 1)
                                y -= 2;
                        break;
                case usr2_DOWN:
                        if(x+1 < 20)
                                x += 1;
                        break;
                case usr2_RIGHT:
                        if(y+2 < 40)
                                y += 2;
                        break;

		case 'x':
			exitflag = 1;
			mapinfoclean();
			break;

		case 'z':
			exitflag = 2;
			mapinfoclean();
			break;

		case put_stone:
			if (color == 1 && mi[x][y/2].put != 1) { // no stone and put stone color black
				int cnt = check44(x,y);

				if(cnt == 1){ gotoxy(13,50); printf("[4x4] can't put"); gotoxy(x,y);}
				else{gotoxy(13,50); printf("                       "); gotoxy(x,y);
					printf("○");
					mi[x][y/2].put = 1; // cur location stone put
					mi[x][y/2].color = 1; // cur location stone color black

					int val = istherewinner(); // fine winner

					if(val == 1) // winner is black
					{
						gotoxy(10,50);
						printf("winner is black!\n");

					}
					color = 2; // 다음에 놓을 돌의 색깔을 바꾼다
				}
			}
			else if (color == 2 && mi[x][y/2].put != 1) { // no stone and put stone color white
				printf("●");
				mi[x][y/2].put = 1; // cur location put stone
				mi[x][y/2].color = 2; // cur location steon color is white

				int val = istherewinner(); // find winner

				if(val == 2) // winner is white
				{
					gotoxy(10,50);
					printf("winner is white!\n");
				}
				color = 1; // 다음에 놓을 돌의 색깔을 바꾼다
			}
        //gotoxy(23,1);
        //for(int i = 0; i < 20; i++)
        //{
         //       for(int j = 0; j < 20; j++)
          //      {
           //             printf("%d", mi[i][j].put);
            //    }
             //   printf("\n");
        //}
        gotoxy(x,y);


		}
		if(exitflag == 1) // regame
		{
			x=10, y=10;
			break;
		}
		else if(exitflag == 2) // quit
		{
			x=10, y=10;
			exitflag = 0; // quit flag on
			break;
		}
		gotoxy(x,y); // 키보드커서의 위치를 바꾸는 키보드입력이 들어왔다면 커서의 위치를 바꾼다
		//printf("%d %d\n",x,y);
	}
	if(exitflag == 0) // quit
	{
		break;
	}
}
}
