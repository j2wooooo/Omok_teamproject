#include <stdio.h>
#include <stdlib.h> // exit function
#include "getch.h"
#include "gotoxy.h"

#include "map.h"
#include "display_menu.h"
#include "game_manual.h"
#include "game_person.h"

int x=10; int y=10; // start location

int main(void)
{
	int menu = 1;
	while(menu)
	{
		menu=display_menu();

		if(menu == 1) //게임설명
		{
			game_manual();
		}
		else if(menu == 2) //사람 간 일대일 모드
		{
			map();
			gotoxy(x,y);
			game_person();
			sleep(100000);
		}
		else if(menu == 3) //사람 대 컴퓨터 초급모드
		{
			map();
			gotoxy(x,y);
			return 0;
		}
		else if(menu == 4) //사람 대 컴퓨터 중급모드
		{
			map();
			gotoxy(x,y);
			return 0;
		}
		else if(menu == 5) //사람 대 컴퓨터 고급모드
		{
			map();
			gotoxy(x,y);
			return 0;
		}
		else if(menu == 6)
		{
			exit(0); //종료
		}
	}
	return 0;
}
