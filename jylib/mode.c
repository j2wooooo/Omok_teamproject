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

// 수비할지 공격할지 선택
// 연속된 돌의 개수가 3개 이상이면 수비
// 공격: 0, 수비: 최초로 수비할 인덱스 반환
int mode()
{
	for(int i = 0; i < blkidx; i++)
	{
		if(blk[i].cont > 2)
			return i;
	}

	return 0;
}
