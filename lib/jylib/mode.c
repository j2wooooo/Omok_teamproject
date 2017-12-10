#include <stdio.h>

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

/*struct white_info
{
        int start_x, start_y;
        int end_x, end_y;
        int cont;
        int dir;
        // 가로: 0, 세로: 1, 오른쪽 아래 대각: 2, 왼쪽 아래 대$
};
extern struct white_info wht[500];
extern int whtidx; // 백돌 정보 구조체 배열 인덱스
extern int whtnum; // 백돌의 총 개수*/

// 수비할지 공격할지 선택
// 연속된 돌의 개수가 3개 이상이면 수비
// 공격: 0, 수비: 1 반환
int mode()
{
	for(int i = 0; i < blkidx; i++)
	{
		if(blk[i].cont > 2)
			return 1;
	}

	return 0;
}
