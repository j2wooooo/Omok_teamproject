#include <stdio.h>
#include <stdlib.h> //exit function
//#include <Windows.h>
//#include <conio.h>
#include "map.h"
#include "display_menu.h"

void map();
int display_menu();
int game_manual();

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
			return 0;
		}
		else if(menu == 3) //사람 대 컴퓨터 초급모드
		{
			map();
			return 0;
		}
		else if(menu == 4) //사람 대 컴퓨터 중급모드
		{
			map();
			return 0;
		}
		else if(menu == 5) //사람 대 컴퓨터 고급모드
		{
			map();
			return 0;
		}
		else if(menu == 6)
		{
			exit(0); //종료
		}
	}
	return 0;
}
