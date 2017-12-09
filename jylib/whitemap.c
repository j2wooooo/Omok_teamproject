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
        // 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대$
};
extern struct black_info blk[500];
extern int blkidx; // 흑돌 정보 구조체 배열 인덱스
extern int blknum; // 흑돌의 총 개수

struct white_info
{
        int start_x, start_y;
        int end_x, end_y;
        int cont;
        int dir;
        // 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대$
};
extern struct white_info wht[500];
extern int whtidx; // 백돌 정보 구조체 배열 인덱스
extern int whtnum; // 백돌의 총 개수

struct white_map 
{
        int put; // 백돌 유무
        int df[8]; // 팔방으로 막는 흑돌의 수
        int at[8]; // 팔방으로 만드는 백돌의 수
        // 0부터 왼, 오, 위, 아래, 왼위, 오아, 오위, 왼아
};
struct white_map whtmap[20][20];

void whitemap()
{
	// 초기화
	for(int i = 0; i < 20; i++)
        {
                for(int j = 0; j < 20; j++)
                {
                        for(int k = 0; k < 8; k++)
                        {
                                if(whtmap[i][j].df[k])
                                        whtmap[i][j].df[k] = 0;
				if(whtmap[i][j].at[k])
                                        whtmap[i][j].at[k] = 0;
                        }
                }
        }

	// 흑돌 근처의 백돌의 수비 가능성 구하기
	for(int i = 0; i < blkidx; i++)
	{
		int x1 = blk[i].start_x;
		int y1 = blk[i].start_y;
		int x2 = blk[i].end_x;
		int y2 = blk[i].end_y;

		switch(blk[i].dir)
		{
		case 0: // 가로 확인: 왼, 오
			if(map_info[x1][y1-1] == 0) // left
				whtmap[x1][y1-1].df[0] = blk[i].cont;
			if(map_info[x2][y2+1] == 0) // right
				whtmap[x2][y2+1].df[1] = blk[i].cont;
		case 1: // 세로 확인: 위, 아래
			if(map_info[x1-1][y1] == 0) // up
                                whtmap[x1-1][y1].df[2] = blk[i].cont;
                        if(map_info[x2+1][y2] == 0) // down
                                whtmap[x2+1][y2].df[3] = blk[i].cont;
		case 2: // 왼 대각 확인: 왼위, 오아
                        if(map_info[x1-1][y1-1] == 0) // left-up
                                whtmap[x1-1][y1-1].df[4] = blk[i].cont;
                        if(map_info[x2+1][y2+1] == 0) // right-down
                                whtmap[x2+1][y2+1].df[5] = blk[i].cont;
		case 3: // 왼 대각 확인: 오위, 왼아
                        if(map_info[x1-1][y1+1] == 0) // right-up
                                whtmap[x1-1][y1+1].df[6] = blk[i].cont;
                        if(map_info[x2+1][y2-1] == 0) // left-down
                                whtmap[x2+1][y2-1].df[7] = blk[i].cont;
		}
	}

	// 현재 백돌의 공격 상태 구하기
	for(int i = 0; i < whtidx; i++)
	{
		int x1 = wht[i].start_x;
		int y1 = wht[i].start_y;
		int x2 = wht[i].end_x;
		int y2 = wht[i].end_y;

		switch(wht[i].dir)
		{
		case 0: // 가로 확인: 왼, 오
			if(map_info[x1][y1-1] == 0) // left
				whtmap[x1][y1-1].at[0] = wht[i].cont;
			if(map_info[x2][y2+1] == 0) // right
				whtmap[x2][y2+1].at[1] = wht[i].cont;
		case 1: // 세로 확인: 위, 아래
			if(map_info[x1-1][y1] == 0) // up
                                whtmap[x1-1][y1].at[2] = wht[i].cont;
                        if(map_info[x2+1][y2] == 0) // down
                                whtmap[x2+1][y2].at[3] = wht[i].cont;
		case 2: // 왼 대각 확인: 왼위, 오아
                        if(map_info[x1-1][y1-1] == 0) // left-up
                                whtmap[x1-1][y1-1].at[4] = wht[i].cont;
                        if(map_info[x2+1][y2+1] == 0) // right-down
                                whtmap[x2+1][y2+1].at[5] = wht[i].cont;
		case 3: // 왼 대각 확인: 오위, 왼아
                        if(map_info[x1-1][y1+1] == 0) // right-up
                                whtmap[x1-1][y1+1].at[6] = wht[i].cont;
                        if(map_info[x2+1][y2-1] == 0) // left-down
                                whtmap[x2+1][y2-1].at[7] = wht[i].cont;
		}
	}

	// 현재 wht의상태 출력
        for(int i = 0; i < 20; i++)
        {
                for(int j = 0; j < 20; j++)
		{
			for(int k = 0; k < 8; k++)
			{
                        	//if(whtmap[i][j].df[k])
				//{
				//	gotoxy(i,j*2);
				//	printf("%d", whtmap[i][j].df[k]);
				//}
				if(whtmap[i][j].at[k])
                                {
                                       gotoxy(i,j*2);
                                        printf("%d", whtmap[i][j].at[k]);
                                }
			}
		}
        }
}
