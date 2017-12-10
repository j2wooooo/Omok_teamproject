#include <stdio.h>
#include "../../include/jjinclude/gotoxy.h"

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];

struct white_info
{
        int start_x, start_y;
        int end_x, end_y;
        int cont;
        int dir;
	// 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대각: 3
};
struct white_info wht[500];
int whtidx = 0; // 백돌 정보 구조체 배열 인덱스
int whtnum; // 백돌의 총 개수

void checkwhite()
{
	int tmp = 0; // 연속된 돌의 개수
        int flag = 0; // 연속 여부 체크 플래그
	int ii, jj;
	int flag2 = 0;
	whtidx = 0;

	for(int i = 0; i < 500; i++)
        {
                if(wht[i].cont == 0)
                        break;

                wht[i].start_x = 0;
                wht[i].start_y = 0;
                wht[i].end_x = 0;
                wht[i].end_y = 0;
                wht[i].cont = 0;
                wht[i].dir = 0;
        }

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
			if(map_info[i][j] == WHITE)
				whtnum++;

			// 처음 백돌 발견
			if((flag == 0) && (map_info[i][j] == WHITE))
			{
				wht[whtidx].start_x = i;
				wht[whtidx].start_y = j;

				flag = 1;
				tmp = 1;
			}
			// 연속된 백돌
			else if((flag == 1) && (map_info[i][j] == WHITE))
			{
				tmp++;
			}
			// 백돌 연속 종료
			else if((flag == 1) && (map_info[i][j] != WHITE))
                        {
                                wht[whtidx].end_x = i;
				wht[whtidx].end_y = j-1;
				wht[whtidx].cont = tmp;
				wht[whtidx].dir = 0;

				flag = 0;
				tmp = 0;
				whtidx++;
                        }
		}
	}
	
	// 세로로 연속 여부 체크
	for(int j = 0; j < 20; j++) // column
	{
		for(int i = 0; i < 20; i++) // row
		{
			// 처음 백돌 발견
			if((flag == 0) && (map_info[i][j] == WHITE))
			{
				wht[whtidx].start_x = i;
				wht[whtidx].start_y = j;

				flag = 1;
				tmp = 1;
			}
			// 연속된 백돌
			else if((flag == 1) && (map_info[i][j] == WHITE))
			{
				tmp++;

			}
			// 백돌 연속 종료
			else if((flag == 1) && (map_info[i][j] != WHITE))
                        {
                                wht[whtidx].end_x = i-1;
				wht[whtidx].end_y = j;
				wht[whtidx].cont = tmp;
				wht[whtidx].dir = 1;
				
				flag = 0;
				tmp = 0;
				whtidx++;
                        }
		}
	}
	
	// 오른쪽 대각으로 연속 여부 체크
        for(int i = 0; i < 20; i++) // row
        {
		ii = i;
                for(int j = 0; j < 20; j++) // column
                {
                        // 처음 백돌 발견
                        if((flag == 0) && (map_info[ii][j] == WHITE))
                        {
				jj = j;
                               	wht[whtidx].start_x = ii;
                               	wht[whtidx].start_y = j;
                               
				flag = 1;
                                tmp = 1;
				ii++;
                        }
                        // 연속된 백돌
                        else if((flag == 1) && (map_info[ii][j] == WHITE))
                        {
                                tmp++;
				ii++;
                        }
			// 백돌 연속 종료
                        else if((flag == 1) && (map_info[ii][j] != WHITE))
                        {
				for(int k = 0; k < whtidx; k++)
                                {
                                        if(wht[k].dir == 2)
                                        {
                                                if((wht[k].end_x == ii-1) && (wht[k].end_y == j-1))
                                                        flag2 = 1;
                                        }
                                }
				if(!flag2)
				{
                                	wht[whtidx].end_x = ii-1;
                                	wht[whtidx].end_y = j-1;
                                	wht[whtidx].cont = tmp;
					wht[whtidx].dir = 2;

					whtidx++;
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
			// 처음 백돌 발견
                        if((flag == 0) && (map_info[ii][j] == WHITE))
                        {
				jj = j;
                                wht[whtidx].start_x = ii;
                                wht[whtidx].start_y = j;

                                flag = 1;
                                tmp = 1;
				ii++;
			}
                        // 연속된 백돌
                        else if((flag == 1) && (map_info[ii][j] == WHITE))
                        {
                                tmp++;
				ii++;
                        }
                        // 백돌 연속 종료
                        else if((flag == 1) && (map_info[ii][j] != WHITE))
                        {
				for(int k = 0; k < whtidx; k++)
                                {
                                        if(wht[k].dir == 3)
                                        {
                                                if((wht[k].end_x == ii-1) && (wht[k].end_y == j+1))
                                                        flag2 = 1;
                                        }
                                }
                                if(!flag2)
                                {
                           		wht[whtidx].end_x = ii-1;
                               		wht[whtidx].end_y = j+1;
                                	wht[whtidx].cont = tmp;
                                	wht[whtidx].dir = 3;

                            		whtidx++;
				}
				flag = 0;
                                flag2 = 0;
                                tmp = 0;
				ii = i;
                                j = jj;
                        }
                }
        }

	/*// 현재 백돌의 상태 출력
	gotoxy(22, 0);
	for(int i = 0; i < whtidx; i++)
	{
		printf("[WHT](%d, %d) ->", wht[i].start_x, wht[i].start_y);
		printf(" (%d, %d)", wht[i].end_x, wht[i].end_y);
		printf(" cont: %d, dir: %d\n", wht[i].cont, wht[i].dir);
	}*/
}
