#include <stdio.h>
#include <stdlib.h>

#include "../../include/jjinclude/map.h"
#include "../../include/jjinclude/getch.h"
#include "../../include/jjinclude/gotoxy.h"
#include "../../include/jyinclude/whofirst.h"
#include "../../include/jyinclude/usrput2.h"
#include "../../include/jyinclude/checkblack.h"
#include "../../include/jyinclude/checkwhite.h"
#include "../../include/jyinclude/whitemap.h"
#include "../../include/jyinclude/mode.h"
#include "../../include/jyinclude/attack.h"
#include "../../include/jyinclude/defend.h"
#include "../../include/jyinclude/winner2.h"

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];
extern int x; // 현재 커서 위치
extern int y;

void com3()
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
			usrput2();
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
			fin = winner2();
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
			if(fin == 3)
			{
				gotoxy(13,50);
				printf("[NOT 5] keep going!\n");
			}
		}
	}
}
