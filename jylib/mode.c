#include <stdio.h>

extern int map_info[20][20];
extern int row[20];
extern int column[20];

int exp_x, exp_y; // 돌을 놓을 위치

// 수비할지 공격할지 선택
// 수비: 반환 0, 공격: 반환 1
int mode()
{
	int cont = 0; // 연속된 돌의 개수
	int flag = 0;

	for(int i = 0; i < 20; i++)
	{
		if((flag == 0) && (row[i] != 0)) // 처음 흑돌
		{
			flag = 1;
			cont = 1;
		}
		else if((flag == 1) && (row[i] != 0)) // 연속된 흑돌
		{
			cont++;
		}
		else if((flag == 1) && (row[i] == 0)) // 연속 종료
		{
			flag = 0;
			cont = 0;
		}
	}
}
