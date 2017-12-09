#include <stdio.h>

extern int map_info[20][20];
extern int row[20];
extern int column[20];

// 수비할지 공격할지 선택
// 연속된 돌의 개수가 3개 이상이면 수비
// 수비: 반환 0, 공격: 반환 1
int mode()
{
	int cont = 0; // 연속된 돌의 개수
	int flag = 0;

	for(int i = 0; i < 20; i++) // 행에 연속된 돌이 있는지 확인
	{
		if((flag == 0) && (column[i] > 0)) // 처음 흑돌
		{
			flag = 1;
			cont = 1;
		}
		else if((flag == 1) && (column[i] > 0)) // 연속된 흑돌
		{
			cont++;
		}
		else if((flag == 1) && (column[i] <= 0)) // 연속 종료
		{
			
			flag = 0;
			cont = 0;
		}
	}

	cont = 0; flag = 0;
	for(int i = 0; i < 20; i++) // 열에 연속된 돌이 있는지 확인
        {
                if((flag == 0) && (row[i] > 0)) // 처음 흑돌
                {
                        flag = 1;
                        cont = 1;
                }
                else if((flag == 1) && (row[i] > 0)) // 연속된$
                {
                        cont++;
                }
                else if((flag == 1) && (row[i] <= 0)) // 연속  $
                {
                        if(cont > 2) return 0; // defend
                        else // check more
                        {
                                flag = 0;
                                cont = 0; 
                        }
		}
        }

	return 1; // attack
}
