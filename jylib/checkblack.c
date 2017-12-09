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
struct black_info blk[500];
int blkidx = 0; // 흑돌 정보 구조체 배열 인덱스
int blknum; // 흑돌의 총 개수

void checkblack()
{
	int tmp = 0; // 연속된 돌의 개수
        int flag = 0; // 연속 여부 체크 플래그
	int ii, jj;
	int flag2 = 0;

	/*// 현재 map의 상태 출력
	gotoxy(21, 0);
        for(int i = 0; i < 20; i++)
	{
               for(int j = 0; j < 20; j++)
                        printf("%d ", map_info[i][j]);
                printf("\n");
        }*/

	// 가로로 연속 여부 체크
	for(int i = 0; i < 20; i++) // row
	{
		for(int j = 0; j < 20; j++) // column
		{
			if(map_info[i][j] == BLACK)
				blknum++;

			// 처음 흑돌 발견
			if((flag == 0) && (map_info[i][j] == BLACK))
			{
				blk[blkidx].start_x = i;
				blk[blkidx].start_y = j;

				flag = 1;
				tmp = 1;
			}
			// 연속된 흑돌
			else if((flag == 1) && (map_info[i][j] == BLACK))
			{
				tmp++;
			}
			// 흑돌 연속 종료
			else if((flag == 1) && (map_info[i][j] != BLACK))
                        {
                                blk[blkidx].end_x = i;
				blk[blkidx].end_y = j-1;
				blk[blkidx].cont = tmp;
				blk[blkidx].dir = 0;

				flag = 0;
				tmp = 0;
				blkidx++;
                        }
		}
	}
	
	// 세로로 연속 여부 체크
	for(int j = 0; j < 20; j++) // column
	{
		for(int i = 0; i < 20; i++) // row
		{
			// 처음 흑돌 발견
			if((flag == 0) && (map_info[i][j] == BLACK))
			{
				blk[blkidx].start_x = i;
				blk[blkidx].start_y = j;

				flag = 1;
				tmp = 1;
			}
			// 연속된 흑돌
			else if((flag == 1) && (map_info[i][j] == BLACK))
			{
				tmp++;
			}
			// 흑돌 연속 종료
			else if((flag == 1) && (map_info[i][j] != BLACK))
                        {
                                blk[blkidx].end_x = i-1;
				blk[blkidx].end_y = j;
				blk[blkidx].cont = tmp;
				blk[blkidx].dir = 1;
				
				flag = 0;
				tmp = 0;
				blkidx++;
                        }
		}
	}
	
	// 오른쪽 대각으로 연속 여부 체크
        for(int i = 0; i < 20; i++) // row
        {
		ii = i;
                for(int j = 0; j < 20; j++) // column
                {
                        // 처음 흑돌 발견
                        if((flag == 0) && (map_info[ii][j] == BLACK))
                        {
				jj = j;
                               	blk[blkidx].start_x = ii;
                               	blk[blkidx].start_y = j;
                               
				flag = 1;
                                tmp = 1;
				ii++;
                        }
                        // 연속된 흑돌
                        else if((flag == 1) && (map_info[ii][j] == BLACK))
                        {
                                tmp++;
				ii++;
                        }
			// 흑돌 연속 종료
                        else if((flag == 1) && (map_info[ii][j] != BLACK))
                        {
				for(int k = 0; k < blkidx; k++)
                                {
                                        if(blk[k].dir == 2)
                                        {
                                                if((blk[k].end_x == ii-1) && (blk[k].end_y == j-1))
                                                        flag2 = 1;
                                        }
                                }
				if(!flag2)
				{
                                	blk[blkidx].end_x = ii-1;
                                	blk[blkidx].end_y = j-1;
                                	blk[blkidx].cont = tmp;
					blk[blkidx].dir = 2;

					blkidx++;
				}

				flag = 0;
                                flag2 = 0;
                                tmp = 0;
                                ii = i;
                                j = jj;
                        }
                }
        }

	// 왼쪽 대각으로 연속 여부 체크
        for(int i = 0; i < 20; i++) // row
        {
		int ii = i;
                for(int j = 19; j >= 0; j--) // column
                {
			// 처음 흑돌 발견
                        if((flag == 0) && (map_info[ii][j] == BLACK))
                        {
				jj = j;
                                blk[blkidx].start_x = ii;
                                blk[blkidx].start_y = j;

                                flag = 1;
                                tmp = 1;
				ii++;
			}
                        // 연속된 흑돌
                        else if((flag == 1) && (map_info[ii][j] == BLACK))
                        {
                                tmp++;
				ii++;
                        }
                        // 흑돌 연속 종료
                        else if((flag == 1) && (map_info[ii][j] != BLACK))
                        {
				for(int k = 0; k < blkidx; k++)
                                {
                                        if(blk[k].dir == 3)
                                        {
                                                if((blk[k].end_x == ii-1) && (blk[k].end_y == j+1))
                                                        flag2 = 1;
                                        }
                                }
                                if(!flag2)
                                {
                           		blk[blkidx].end_x = ii-1;
                               		blk[blkidx].end_y = j+1;
                                	blk[blkidx].cont = tmp;
                                	blk[blkidx].dir = 3;

                            		blkidx++;
				}
				flag = 0;
                                flag2 = 0;
                                tmp = 0;
				ii = i;
                                j = jj;
                        }
                }
        }

	// 현재 흑돌의 상태 출력
	gotoxy(22, 0);
	for(int i = 0; i < blkidx; i++)
	{
		printf("[BLK](%d, %d) ->", blk[i].start_x, blk[i].start_y);
		printf(" (%d, %d)", blk[i].end_x, blk[i].end_y);
		printf(" cont: %d, dir: %d\n", blk[i].cont, blk[i].dir);
	}
}
