#include <stdio.h>
#include <stdlib.h>

#include "../include/map.h"
#include "../include/getch.h"
#include "../include/gotoxy.h"
#include "../jyinclude/whofirst.h"
#include "../jyinclude/usrput.h"
#include "../jyinclude/checkblack.h"
#include "../jyinclude/checkwhite.h"
#include "../jyinclude/whitemap.h"
#include "../jyinclude/mode.h"
#include "../jyinclude/attack.h"
#include "../jyinclude/defend.h"
#include "../jyinclude/winner.h"

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];
extern int x; // 현재 커서 위치
extern int y;

void com1()
{
	int order = whofirst(); // 1->user, 0->com

	char ch;
	int fin;

	system("clear");

	map();

        gotoxy(11,50);
        printf("메뉴로 돌아가기 [z]");

        gotoxy(x,y);

	if(order == 1) // user first
	{
		while(1)
		{
			// usr mode
			usrput();
			//gotoxy(x, y);

			// com mode
			checkblack();
			checkwhite();
		        whitemap();

			gotoxy(21,0);
			if(mode())
			{
				printf("defend");
				defend();
			}
			else
			{
				printf("attack");
				attack();
			}
		
			// check the winner
			checkwhite();
		        whitemap();		
			fin = winner();
		        if(fin == 1)
		        {
		                gotoxy(10, 50);
		                printf("winner is user!\n");

		                ch = getch();
		                switch(ch)
		                {
		                case 'z':
		                        //mapinfoclean();
		                        break;
		                }
		        }
			if(fin == 2)
		        {
		                gotoxy(10, 50);
		                printf("winner is computer!\n");

		                ch = getch();
		                switch(ch)
		                {
		                case 'z':
		                        //mapinfoclean();
		                        break;
		                }
		        }
		}
	}
}
