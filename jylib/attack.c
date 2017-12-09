#include <stdio.h>
#include "../include/gotoxy.h"

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];

struct black_info
{
        int start_x, start_y;
        int end_x, end_y;
        int cont;
        int dir;
        // 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대각: 3
};
extern struct black_info blk[500];
extern int blkidx;
extern int blknum;

struct white_info
{
        int start_x, start_y;
        int end_x, end_y;
        int cont;
        int dir;
        // 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대각: 3
};
extern struct white_info wht[500];
extern int whtidx;
extern int whtnum;

int ax, ay; // 공격 좌표

void attack()
{
	int flag, i, j;

	for(i = 0; i < blkidx; i++)
	{
		if(blk[i].cont == 1)
			flag = 1;
		else
		{
			flag = 2;
			break;
		}
	}

	if(flag == 1) // 현재 연속된 돌은 1개가 최대
	{
		if(blknum == 1) // 돌이 1개만 있을 때
		{
			if(blk[0].end_y < 10)
			{
				ax = blk[0].end_x;
				ay = blk[0].end_y + 1;
			}
			else
			{
				ax = blk[0].end_x;
				ay = blk[0].end_y - 1;
			}
		}
		else
		{
			for(j = 0; j < blkidx; j++)
			{
				// 돌이 일정한 간격으로 떨어져있음
				if(blk[i].end_y + 2 == BLACK) // 가로
				{
					ax = blk[i].end_x + 1;
					ay = blk[i].end_y;
				}
				
			}
		}
	}

	printf(" ax: %d, ay: %d", ax, ay);
	
	gotoxy(ax, ay*2);
	map_info[ax][ay] = WHITE;
	printf("○");
}
