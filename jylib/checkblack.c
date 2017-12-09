#include <stdio.h>
#include "../include/gotoxy.h"

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];
//int row[20]; // 행과 열의 흑돌 개수를 카운트하여 배열에 저장
//int column[20];

struct black_info
{
        int start_x, start_y;
        int end_x, end_y;
        int cont;
	int dir; // 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대각: 3
};
struct black_info blk[50];

void checkblack()
{
	//int black = 0; // num of black stones
        //int x1, y1;

	int tmp = 0; // 연속된 돌의 개수
        int flag = 0; // 연속 여부 체크 플래그
	int idx = 0; // 흑돌 정보 구조체 배열 인덱스

	// 현재 map의 상태 출력
	gotoxy(21, 0);
        for(int i = 0; i < 20; i++)
	{
               for(int j = 0; j < 20; j++)
                        printf("%d ", map_info[i][j]);
                printf("\n");
        }

	// 가로로 연속 여부 체크
	for(int i = 0; i < 20; i++) // row
	{
		for(int j = 0; j < 20; j++) // column
		{
			// 처음 흑돌 발견
			if((flag == 0) && (map_info[i][j] == BLACK))
			{
				blk[idx].start_x = i;
				blk[idx].start_y = j;

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
                                blk[idx].end_x = i;
				blk[idx].end_y = j-1;
				blk[idx].cont = tmp;
				blk[idx].dir = 0;

				flag = 0;
				tmp = 0;
				idx++;
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
				blk[idx].start_x = i;
				blk[idx].start_y = j;

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
                                blk[idx].end_x = i;
				blk[idx].end_y = j-1;
				blk[idx].cont = tmp;
				blk[idx].dir = 1;

				flag = 0;
				tmp = 0;
				idx++;
                        }
		}
	}
	
	// 대각으로 연속 여부 체크
        for(int i = 0; i < 20; i++) // row
        {
                for(int j = 0; j < 20; j++) // column
                {
                        // 처음 흑돌 발견
                        if((flag == 0) && (map_info[i][j] == BLACK))
                        {
                                blk[idx].start_x = i;
                                blk[idx].start_y = j;

                                flag = 1;
                                tmp = 1;
				i++;
                        }
                        // 연속된 흑돌
                        else if((flag == 1) && (map_info[i][j] == BLACK))
                        {
                                tmp++;
                        }
			// 흑돌 연속 종료
                        else if((flag == 1) && (map_info[i][j] != BLACK))
                        {
                                blk[idx].end_x = i;
                                blk[idx].end_y = j-1;
                                blk[idx].cont = tmp;
				blk[idx].dir = 2;

                                flag = 0;
                                tmp = 0;
                                idx++;
                        }
                }
        }

	
	// 대각으로 연속 여부 체크
        for(int i = 0; i < 20; i++) // row
        {
                for(int j = 19; j >= 0; j--) // column
                {
			// 처음 흑돌 발견
                        if((flag == 0) && (map_info[i][j] == BLACK))
                        {
                                blk[idx].start_x = i;
                                blk[idx].start_y = j;

                                flag = 1;
                                tmp = 1;
				i++;
			}
                        // 연속된 흑돌
                        else if((flag == 1) && (map_info[i][j] == BLACK))
                        {
                                tmp++;
                        }
                        // 흑돌 연속 종료
                        else if((flag == 1) && (map_info[i][j] != BLACK))
                        {
                                blk[idx].end_x = i;
                                blk[idx].end_y = j-1;
                                blk[idx].cont = tmp;
                                blk[idx].dir = 3;
	
	                        flag = 0;
                                tmp = 0;
                                idx++;
                        }
                }
        }
	

	// 현재 흑돌의 상태 출력
	//gotoxy(41, 0);
	for(int i = 0; i < idx; i++)
		printf("(%d, %d) -> (%d, %d), cont: %d, dir: %d\n", blk[i].start_x, blk[i].start_y, blk[i].end_x, blk[i].end_y, blk[i].cont, blk[i].dir);
	


	/*
        for(x1 = 0; x1 < 20; x1++) // check column
	{
                for(y1 = 0; y1 < 20; y1++)
		{
                        if(map_info[x1][y1] == BLACK)
				black++;
                }
		row[x1] = black;
                black = 0;
	}
        for(y1 = 0; y1 < 20; y1++) // check row
	{
                for(x1 = 0; x1 < 20; x1++)
		{
                        if(map_info[x1][y1] == BLACK)
                                black++;
                }
		column[y1] = black;
                black = 0;
        }

	// print row and column
        //for(int i = 0; i < 20; i++)
        //        printf("%d ", row[i]);
	//printf("\n");
        //for(int i = 0; i < 20; i++) 
        //        printf("%d ", column[i]);
	*/
}
