#include <stdio.h>

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

int winner()
{
	for(int i = 0; i < blkidx; i++)
	{
		if(blk[i].cont == 5)
			return 1; // usr win
	}
	for(int i = 0; i < whtidx; i++)
        {
                if(wht[i].cont == 5)
                        return 2; // com win
        }
	return 0;
}
