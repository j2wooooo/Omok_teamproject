#include<stdio.h>
#include<stdlib.h>

int getch();

int game_manual(void)
{
	system("clear");

	int ch;
	printf("\n\n\t\t\t         게임설명서");
	printf("\n\n\t  자신의 돌이 5개 연속으로 놓아지면 승리!");
	printf("\n\n\t\t\t         1대1모드");
	printf("\n\n  [ 흑돌 ● ] 위 : w | 아래 : s | 왼쪽 : a | 오른쪽 : f | 돌 놓기 : space");
	printf("\n\n  [ 백돌 ○ ] 위 : ↑ | 아래 : ↓ | 왼쪽 : ← | 오른쪽 : → | 돌 놓기 : space");
	printf("\n\n\n\t\t\t         컴퓨터모드");
	printf("\n\n  위 : ↑ | 아래 : ↓ | 왼쪽 : ← | 오른쪽 : → | 돌 놓기 : space");

	printf("\n\n\t  게임 메뉴로 돌아가기 : M");
	while (1)
	{
		ch = getch();
		if (ch == 77 || ch == 109)
			break;
	}
	return 0;
}
