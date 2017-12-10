#include <stdio.h>
#define BLACK -2
#define WHITE 2

extern int map_info[20][20];

int check44(int x1, int y1)
{
	int count = 0;

	// check row
	if ((map_info[x1][y1 / 2 - 4] == 0 && map_info[x1][y1 / 2 - 3] ==  BLACK && map_info[x1][y1 / 2 - 2] ==  BLACK && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 + 1] == 0) ||
		(map_info[x1][y1 / 2 + 4] == 0 && map_info[x1][y1 / 2 + 3] ==  BLACK && map_info[x1][y1 / 2 + 2] ==  BLACK && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 - 1] == 0) ||
		(map_info[x1][y1 / 2 - 5] == 0 && map_info[x1][y1 / 2 - 4] ==  BLACK && map_info[x1][y1 / 2 - 3] ==  BLACK && map_info[x1][y1 / 2 - 2] ==  BLACK && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 + 1] == 0) ||
		(map_info[x1][y1 / 2 + 5] == 0 && map_info[x1][y1 / 2 + 4] ==  BLACK && map_info[x1][y1 / 2 + 3] == 0 && map_info[x1][y1 / 2 + 2] ==  BLACK && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 - 1] == 0) ||
		(map_info[x1][y1 / 2 - 5] == 0 && map_info[x1][y1 / 2 - 4] ==  BLACK && map_info[x1][y1 / 2 - 3] ==  BLACK && map_info[x1][y1 / 2 - 2] == 0 && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 + 1] == 0) ||
		(map_info[x1][y1 / 2 + 5] == 0 && map_info[x1][y1 / 2 + 4] ==  BLACK && map_info[x1][y1 / 2 + 3] ==  BLACK && map_info[x1][y1 / 2 + 2] == 0 && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 - 1] == 0) ||
		(map_info[x1][y1 / 2 - 5] == 0 && map_info[x1][y1 / 2 - 4] ==  BLACK && map_info[x1][y1 / 2 - 3] ==  BLACK && map_info[x1][y1 / 2 - 2] ==  BLACK && map_info[x1][y1 / 2 - 1] == 0 && map_info[x1][y1 / 2 + 1] == 0) ||
		(map_info[x1][y1 / 2 + 5] == 0 && map_info[x1][y1 / 2 + 4] ==  BLACK && map_info[x1][y1 / 2 + 3] ==  BLACK && map_info[x1][y1 / 2 + 2] ==  BLACK && map_info[x1][y1 / 2 + 1] == 0 && map_info[x1][y1 / 2 - 1] == 0) ||
		(map_info[x1][y1 / 2 - 3] == 0 && map_info[x1][y1 / 2 - 2] ==  BLACK && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 + 2] == 0) ||
		(map_info[x1][y1 / 2 + 3] == 0 && map_info[x1][y1 / 2 + 2] ==  BLACK && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 - 2] == 0) ||
		(map_info[x1][y1 / 2 - 4] == 0 && map_info[x1][y1 / 2 - 3] ==  BLACK && map_info[x1][y1 / 2 - 2] ==  BLACK && map_info[x1][y1 / 2 - 1] == 0 && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 + 2] == 0) ||
		(map_info[x1][y1 / 2 + 4] == 0 && map_info[x1][y1 / 2 + 3] ==  BLACK && map_info[x1][y1 / 2 + 2] ==  BLACK && map_info[x1][y1 / 2 + 1] == 0 && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 - 2] == 0) ||
		(map_info[x1][y1 / 2 - 4] == 0 && map_info[x1][y1 / 2 - 3] ==  BLACK && map_info[x1][y1 / 2 - 2] == 0 && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 + 2] == 0) ||
		(map_info[x1][y1 / 2 + 4] == 0 && map_info[x1][y1 / 2 + 3] ==  BLACK && map_info[x1][y1 / 2 + 2] == 0 && map_info[x1][y1 / 2 + 1] ==  BLACK && map_info[x1][y1 / 2 - 1] ==  BLACK && map_info[x1][y1 / 2 - 2] == 0))
		count++;

	// check col
		if ((map_info[x1 - 4][y1 / 2] == 0 && map_info[x1 - 3][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] == 0) ||
		(map_info[x1 + 4][y1 / 2] == 0 && map_info[x1 + 3][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] == 0) ||
		(map_info[x1 - 5][y1 / 2] == 0 && map_info[x1 - 4][y1 / 2] ==  BLACK && map_info[x1 - 3][y1 / 2] == 0 && map_info[x1 - 2][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] == 0) ||
		(map_info[x1 + 5][y1 / 2] == 0 && map_info[x1 + 4][y1 / 2] ==  BLACK && map_info[x1 + 3][y1 / 2] == 0 && map_info[x1 + 2][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] == 0) ||
		(map_info[x1 - 5][y1 / 2] == 0 && map_info[x1 - 4][y1 / 2] ==  BLACK && map_info[x1 - 3][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] == 0 && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] == 0) ||
		(map_info[x1 + 5][y1 / 2] == 0 && map_info[x1 + 4][y1 / 2] ==  BLACK && map_info[x1 + 3][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] == 0 && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] == 0) ||
		(map_info[x1 - 5][y1 / 2] == 0 && map_info[x1 - 4][y1 / 2] ==  BLACK && map_info[x1 - 3][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] == 0 && map_info[x1 + 1][y1 / 2] == 0) ||
		(map_info[x1 + 5][y1 / 2] == 0 && map_info[x1 + 4][y1 / 2] ==  BLACK && map_info[x1 + 3][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] == 0 && map_info[x1 - 1][y1 / 2] == 0) ||
		(map_info[x1 - 3][y1 / 2] == 0 && map_info[x1 - 2][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] == 0) ||
		(map_info[x1 + 3][y1 / 2] == 0 && map_info[x1 + 2][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] == 0) ||
		(map_info[x1 - 4][y1 / 2] == 0 && map_info[x1 - 3][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] == 0 && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] == 0) ||
		(map_info[x1 + 4][y1 / 2] == 0 && map_info[x1 + 3][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] == 0 && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] == 0) ||
		(map_info[x1 - 4][y1 / 2] == 0 && map_info[x1 - 3][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] == 0 && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] == 0) ||
		(map_info[x1 + 4][y1 / 2] == 0 && map_info[x1 + 3][y1 / 2] ==  BLACK && map_info[x1 + 2][y1 / 2] == 0 && map_info[x1 + 1][y1 / 2] ==  BLACK && map_info[x1 - 1][y1 / 2] ==  BLACK && map_info[x1 - 2][y1 / 2] == 0))
		count++;

	// check diag

	// 대각선체크. 
	if ((map_info[x1 - 4][y1 / 2 - 4] == 0 && map_info[x1 - 3][y1 / 2 - 3] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 + 4][y1 / 2 + 4] == 0 && map_info[x1 + 3][y1 / 2 + 3] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 - 5][y1 / 2 - 5] == 0 && map_info[x1 - 4][y1 / 2 - 4] ==  BLACK && map_info[x1 - 3][y1 / 2 - 3] == 0 && map_info[x1 - 2][y1 / 2 - 2] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 + 5][y1 / 2 + 5] == 0 && map_info[x1 + 4][y1 / 2 + 4] ==  BLACK && map_info[x1 + 3][y1 / 2 + 3] == 0 && map_info[x1 + 2][y1 / 2 + 2] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 - 5][y1 / 2 - 5] == 0 && map_info[x1 - 4][y1 / 2 - 4] ==  BLACK && map_info[x1 - 3][y1 / 2 - 3] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] == 0 && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 + 5][y1 / 2 + 5] == 0 && map_info[x1 + 4][y1 / 2 + 4] ==  BLACK && map_info[x1 + 3][y1 / 2 + 3] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] == 0 && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 - 5][y1 / 2 - 5] == 0 && map_info[x1 - 4][y1 / 2 - 4] ==  BLACK && map_info[x1 - 3][y1 / 2 - 3] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] == 0 && map_info[x1 + 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 + 5][y1 / 2 + 5] == 0 && map_info[x1 + 4][y1 / 2 + 4] ==  BLACK && map_info[x1 + 3][y1 / 2 + 3] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] == 0 && map_info[x1 - 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 - 3][y1 / 2 - 3] == 0 && map_info[x1 - 2][y1 / 2 - 2] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] == 0) ||
		(map_info[x1 + 3][y1 / 2 + 3] == 0 && map_info[x1 + 2][y1 / 2 + 2] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] == 0) ||
		(map_info[x1 - 4][y1 / 2 - 4] == 0 && map_info[x1 - 3][y1 / 2 - 3] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] == 0 && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] == 0) ||
		(map_info[x1 + 4][y1 / 2 + 4] == 0 && map_info[x1 + 3][y1 / 2 + 3] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] == 0 && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] == 0) ||
		(map_info[x1 - 4][y1 / 2 - 4] == 0 && map_info[x1 - 3][y1 / 2 - 3] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] == 0 && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] == 0) ||
		(map_info[x1 + 4][y1 / 2 + 4] == 0 && map_info[x1 + 3][y1 / 2 + 3] ==  BLACK && map_info[x1 + 2][y1 / 2 + 2] == 0 && map_info[x1 + 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 2][y1 / 2 - 2] == 0))
		count++;
	// 반대 대각선체크. 
	if ((map_info[x1 - 4][y1 / 2 + 4] == 0 && map_info[x1 - 3][y1 / 2 + 3] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 + 4][y1 / 2 - 4] == 0 && map_info[x1 + 3][y1 / 2 - 3] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 - 5][y1 / 2 + 5] == 0 && map_info[x1 - 4][y1 / 2 + 4] ==  BLACK && map_info[x1 - 3][y1 / 2 + 3] == 0 && map_info[x1 - 2][y1 / 2 + 2] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 + 5][y1 / 2 - 5] == 0 && map_info[x1 + 4][y1 / 2 - 4] ==  BLACK && map_info[x1 + 3][y1 / 2 - 3] == 0 && map_info[x1 + 2][y1 / 2 - 2] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 - 5][y1 / 2 + 5] == 0 && map_info[x1 - 4][y1 / 2 + 4] ==  BLACK && map_info[x1 - 3][y1 / 2 + 3] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] == 0 && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 + 5][y1 / 2 - 5] == 0 && map_info[x1 + 4][y1 / 2 - 4] ==  BLACK && map_info[x1 + 3][y1 / 2 - 3] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] == 0 && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 - 5][y1 / 2 - 5] == 0 && map_info[x1 - 4][y1 / 2 + 4] ==  BLACK && map_info[x1 - 3][y1 / 2 + 3] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] == 0 && map_info[x1 + 1][y1 / 2 - 1] == 0) ||
		(map_info[x1 + 5][y1 / 2 + 5] == 0 && map_info[x1 + 4][y1 / 2 - 4] ==  BLACK && map_info[x1 + 3][y1 / 2 - 3] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] == 0 && map_info[x1 - 1][y1 / 2 + 1] == 0) ||
		(map_info[x1 - 3][y1 / 2 + 3] == 0 && map_info[x1 - 2][y1 / 2 + 2] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] == 0) ||
		(map_info[x1 + 3][y1 / 2 - 3] == 0 && map_info[x1 + 2][y1 / 2 - 2] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] == 0) ||
		(map_info[x1 - 4][y1 / 2 + 4] == 0 && map_info[x1 - 3][y1 / 2 + 3] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] == 0 && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] == 0) ||
		(map_info[x1 + 4][y1 / 2 - 4] == 0 && map_info[x1 + 3][y1 / 2 - 3] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] == 0 && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] == 0) ||
		(map_info[x1 - 4][y1 / 2 + 4] == 0 && map_info[x1 - 3][y1 / 2 + 3] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] == 0 && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] == 0) ||
		(map_info[x1 + 4][y1 / 2 - 4] == 0 && map_info[x1 + 3][y1 / 2 - 3] ==  BLACK && map_info[x1 + 2][y1 / 2 - 2] == 0 && map_info[x1 + 1][y1 / 2 - 1] ==  BLACK && map_info[x1 - 1][y1 / 2 + 1] ==  BLACK && map_info[x1 - 2][y1 / 2 + 2] == 0))
		count++;

	//printf("check44");
	if (count > 1) return 1;
	else return 0;
}
