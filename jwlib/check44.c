#include<stdio.h>
struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

extern struct map_info mi[20][20];

int check44(int x1, int y1)
{
	int count = 0;

	// check row
	if ((mi[x1][y1 / 2 - 4].color == 0 && mi[x1][y1 / 2 - 3].color == 1 && mi[x1][y1 / 2 - 2].color == 1 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 + 1].color == 0) ||
		(mi[x1][y1 / 2 + 4].color == 0 && mi[x1][y1 / 2 + 3].color == 1 && mi[x1][y1 / 2 + 2].color == 1 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 - 1].color == 0) ||
		(mi[x1][y1 / 2 - 5].color == 0 && mi[x1][y1 / 2 - 4].color == 1 && mi[x1][y1 / 2 - 3].color == 1 && mi[x1][y1 / 2 - 2].color == 1 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 + 1].color == 0) ||
		(mi[x1][y1 / 2 + 5].color == 0 && mi[x1][y1 / 2 + 4].color == 1 && mi[x1][y1 / 2 + 3].color == 0 && mi[x1][y1 / 2 + 2].color == 1 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 - 1].color == 0) ||
		(mi[x1][y1 / 2 - 5].color == 0 && mi[x1][y1 / 2 - 4].color == 1 && mi[x1][y1 / 2 - 3].color == 1 && mi[x1][y1 / 2 - 2].color == 0 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 + 1].color == 0) ||
		(mi[x1][y1 / 2 + 5].color == 0 && mi[x1][y1 / 2 + 4].color == 1 && mi[x1][y1 / 2 + 3].color == 1 && mi[x1][y1 / 2 + 2].color == 0 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 - 1].color == 0) ||
		(mi[x1][y1 / 2 - 5].color == 0 && mi[x1][y1 / 2 - 4].color == 1 && mi[x1][y1 / 2 - 3].color == 1 && mi[x1][y1 / 2 - 2].color == 1 && mi[x1][y1 / 2 - 1].color == 0 && mi[x1][y1 / 2 + 1].color == 0) ||
		(mi[x1][y1 / 2 + 5].color == 0 && mi[x1][y1 / 2 + 4].color == 1 && mi[x1][y1 / 2 + 3].color == 1 && mi[x1][y1 / 2 + 2].color == 1 && mi[x1][y1 / 2 + 1].color == 0 && mi[x1][y1 / 2 - 1].color == 0) ||
		(mi[x1][y1 / 2 - 3].color == 0 && mi[x1][y1 / 2 - 2].color == 1 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 + 2].color == 0) ||
		(mi[x1][y1 / 2 + 3].color == 0 && mi[x1][y1 / 2 + 2].color == 1 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 - 2].color == 0) ||
		(mi[x1][y1 / 2 - 4].color == 0 && mi[x1][y1 / 2 - 3].color == 1 && mi[x1][y1 / 2 - 2].color == 1 && mi[x1][y1 / 2 - 1].color == 0 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 + 2].color == 0) ||
		(mi[x1][y1 / 2 + 4].color == 0 && mi[x1][y1 / 2 + 3].color == 1 && mi[x1][y1 / 2 + 2].color == 1 && mi[x1][y1 / 2 + 1].color == 0 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 - 2].color == 0) ||
		(mi[x1][y1 / 2 - 4].color == 0 && mi[x1][y1 / 2 - 3].color == 1 && mi[x1][y1 / 2 - 2].color == 0 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 + 2].color == 0) ||
		(mi[x1][y1 / 2 + 4].color == 0 && mi[x1][y1 / 2 + 3].color == 1 && mi[x1][y1 / 2 + 2].color == 0 && mi[x1][y1 / 2 + 1].color == 1 && mi[x1][y1 / 2 - 1].color == 1 && mi[x1][y1 / 2 - 2].color == 0))
		count++;

	// check col
		if ((mi[x1 - 4][y1 / 2].color == 0 && mi[x1 - 3][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 0) ||
		(mi[x1 + 4][y1 / 2].color == 0 && mi[x1 + 3][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 0) ||
		(mi[x1 - 5][y1 / 2].color == 0 && mi[x1 - 4][y1 / 2].color == 1 && mi[x1 - 3][y1 / 2].color == 0 && mi[x1 - 2][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 0) ||
		(mi[x1 + 5][y1 / 2].color == 0 && mi[x1 + 4][y1 / 2].color == 1 && mi[x1 + 3][y1 / 2].color == 0 && mi[x1 + 2][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 0) ||
		(mi[x1 - 5][y1 / 2].color == 0 && mi[x1 - 4][y1 / 2].color == 1 && mi[x1 - 3][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 0 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 0) ||
		(mi[x1 + 5][y1 / 2].color == 0 && mi[x1 + 4][y1 / 2].color == 1 && mi[x1 + 3][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 0 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 0) ||
		(mi[x1 - 5][y1 / 2].color == 0 && mi[x1 - 4][y1 / 2].color == 1 && mi[x1 - 3][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 0 && mi[x1 + 1][y1 / 2].color == 0) ||
		(mi[x1 + 5][y1 / 2].color == 0 && mi[x1 + 4][y1 / 2].color == 1 && mi[x1 + 3][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 0 && mi[x1 - 1][y1 / 2].color == 0) ||
		(mi[x1 - 3][y1 / 2].color == 0 && mi[x1 - 2][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 0) ||
		(mi[x1 + 3][y1 / 2].color == 0 && mi[x1 + 2][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 0) ||
		(mi[x1 - 4][y1 / 2].color == 0 && mi[x1 - 3][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 0 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 0) ||
		(mi[x1 + 4][y1 / 2].color == 0 && mi[x1 + 3][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 0 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 0) ||
		(mi[x1 - 4][y1 / 2].color == 0 && mi[x1 - 3][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 0 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 0) ||
		(mi[x1 + 4][y1 / 2].color == 0 && mi[x1 + 3][y1 / 2].color == 1 && mi[x1 + 2][y1 / 2].color == 0 && mi[x1 + 1][y1 / 2].color == 1 && mi[x1 - 1][y1 / 2].color == 1 && mi[x1 - 2][y1 / 2].color == 0))
		count++;

	// check diag

	// 대각선체크. 
	if ((mi[x1 - 4][y1 / 2 - 4].color == 0 && mi[x1 - 3][y1 / 2 - 3].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 + 4][y1 / 2 + 4].color == 0 && mi[x1 + 3][y1 / 2 + 3].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 - 5][y1 / 2 - 5].color == 0 && mi[x1 - 4][y1 / 2 - 4].color == 1 && mi[x1 - 3][y1 / 2 - 3].color == 0 && mi[x1 - 2][y1 / 2 - 2].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 + 5][y1 / 2 + 5].color == 0 && mi[x1 + 4][y1 / 2 + 4].color == 1 && mi[x1 + 3][y1 / 2 + 3].color == 0 && mi[x1 + 2][y1 / 2 + 2].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 - 5][y1 / 2 - 5].color == 0 && mi[x1 - 4][y1 / 2 - 4].color == 1 && mi[x1 - 3][y1 / 2 - 3].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 0 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 + 5][y1 / 2 + 5].color == 0 && mi[x1 + 4][y1 / 2 + 4].color == 1 && mi[x1 + 3][y1 / 2 + 3].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 0 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 - 5][y1 / 2 - 5].color == 0 && mi[x1 - 4][y1 / 2 - 4].color == 1 && mi[x1 - 3][y1 / 2 - 3].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 0 && mi[x1 + 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 + 5][y1 / 2 + 5].color == 0 && mi[x1 + 4][y1 / 2 + 4].color == 1 && mi[x1 + 3][y1 / 2 + 3].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 0 && mi[x1 - 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 - 3][y1 / 2 - 3].color == 0 && mi[x1 - 2][y1 / 2 - 2].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 0) ||
		(mi[x1 + 3][y1 / 2 + 3].color == 0 && mi[x1 + 2][y1 / 2 + 2].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 0) ||
		(mi[x1 - 4][y1 / 2 - 4].color == 0 && mi[x1 - 3][y1 / 2 - 3].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 0 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 0) ||
		(mi[x1 + 4][y1 / 2 + 4].color == 0 && mi[x1 + 3][y1 / 2 + 3].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 0 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 0) ||
		(mi[x1 - 4][y1 / 2 - 4].color == 0 && mi[x1 - 3][y1 / 2 - 3].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 0 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 0) ||
		(mi[x1 + 4][y1 / 2 + 4].color == 0 && mi[x1 + 3][y1 / 2 + 3].color == 1 && mi[x1 + 2][y1 / 2 + 2].color == 0 && mi[x1 + 1][y1 / 2 + 1].color == 1 && mi[x1 - 1][y1 / 2 - 1].color == 1 && mi[x1 - 2][y1 / 2 - 2].color == 0))
		count++;
	// 반대 대각선체크. 
	if ((mi[x1 - 4][y1 / 2 + 4].color == 0 && mi[x1 - 3][y1 / 2 + 3].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 + 4][y1 / 2 - 4].color == 0 && mi[x1 + 3][y1 / 2 - 3].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 - 5][y1 / 2 + 5].color == 0 && mi[x1 - 4][y1 / 2 + 4].color == 1 && mi[x1 - 3][y1 / 2 + 3].color == 0 && mi[x1 - 2][y1 / 2 + 2].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 + 5][y1 / 2 - 5].color == 0 && mi[x1 + 4][y1 / 2 - 4].color == 1 && mi[x1 + 3][y1 / 2 - 3].color == 0 && mi[x1 + 2][y1 / 2 - 2].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 - 5][y1 / 2 + 5].color == 0 && mi[x1 - 4][y1 / 2 + 4].color == 1 && mi[x1 - 3][y1 / 2 + 3].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 0 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 + 5][y1 / 2 - 5].color == 0 && mi[x1 + 4][y1 / 2 - 4].color == 1 && mi[x1 + 3][y1 / 2 - 3].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 0 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 - 5][y1 / 2 - 5].color == 0 && mi[x1 - 4][y1 / 2 + 4].color == 1 && mi[x1 - 3][y1 / 2 + 3].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 0 && mi[x1 + 1][y1 / 2 - 1].color == 0) ||
		(mi[x1 + 5][y1 / 2 + 5].color == 0 && mi[x1 + 4][y1 / 2 - 4].color == 1 && mi[x1 + 3][y1 / 2 - 3].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 0 && mi[x1 - 1][y1 / 2 + 1].color == 0) ||
		(mi[x1 - 3][y1 / 2 + 3].color == 0 && mi[x1 - 2][y1 / 2 + 2].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 0) ||
		(mi[x1 + 3][y1 / 2 - 3].color == 0 && mi[x1 + 2][y1 / 2 - 2].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 0) ||
		(mi[x1 - 4][y1 / 2 + 4].color == 0 && mi[x1 - 3][y1 / 2 + 3].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 0 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 0) ||
		(mi[x1 + 4][y1 / 2 - 4].color == 0 && mi[x1 + 3][y1 / 2 - 3].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 0 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 0) ||
		(mi[x1 - 4][y1 / 2 + 4].color == 0 && mi[x1 - 3][y1 / 2 + 3].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 0 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 0) ||
		(mi[x1 + 4][y1 / 2 - 4].color == 0 && mi[x1 + 3][y1 / 2 - 3].color == 1 && mi[x1 + 2][y1 / 2 - 2].color == 0 && mi[x1 + 1][y1 / 2 - 1].color == 1 && mi[x1 - 1][y1 / 2 + 1].color == 1 && mi[x1 - 2][y1 / 2 + 2].color == 0))
		count++;

	if (count > 1) return 1;
	else return 0;
}
