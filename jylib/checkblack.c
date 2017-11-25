#include <stdio.h>

#define BLACK -2
#define WHITE 2

extern int map_info[20][20];
int black = 0; // num of black stones

void checkblack(int x, int y)
{
        int row[20]; // 행과 열의 흑돌 개수를 카운트하여 배열에 저장
        int column[20];
        int x1 = x; int x2 = y; // tmp x, y
	
	// print map_info
        for(int i = 0; i < 20; i++)
	{
               for(int j = 0; j < 20; j++)
                        printf("%d ", map_info[i][j]);
                printf("\n");
        }

        for(int x1 = 0; x1 < 20; x1++) // check column
	{
                for(int y1 = 0; y1 < 20; y1++)
		{
                        if(map_info[x1][y1] == BLACK)
                                black++;
                }
		row[x1] = black;
                black = 0;
	}
        for(int y1 = 0; y1 < 20; y1++) // check row
	{
                for(int x1 = 0; x1 < 20; x1++)
		{
                        if(map_info[x1][y1] == BLACK)
                                black++;
                }
		column[y1] = black;
                black = 0;
        }

	// print row and column
        for(int i = 0; i < 20; i++)
                printf("%d ", row[i]);
	printf("\n");
        for(int i = 0; i < 20; i++) 
                printf("%d ", column[i]);
}
