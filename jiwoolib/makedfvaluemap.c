#include<stdio.h>
extern struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};
extern struct map_info mi[20][20];

void makedfvaluemap(int player)
{
	if(player == 2) // com first
	{		
		for(int i = 0; i < 20; i++)
		{
			for(int j = 0; j < 20; j++)
			{
				if(i-4 >= 0 && j-4 >= 0 && mi[i-4][j-4].color == 1 && mi[i-3][j-3].color == 2 && mi[i-2][j-2].color == 2 && mi[i-1][j-1].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-4 >= 0 && mi[i-4][j].color == 1 && mi[i-3][j].color == 2 && mi[i-2][j].color == 2 && mi[i-1][j].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-4 >= 0 && j+4 < 20 && mi[i-4][j+4].color == 1 && mi[i-3][j+3].color == 2 && mi[i-2][j+2].color == 2 && mi[i-1][j+1].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j-4 >= 0 && mi[i][j-4].color == 1 && mi[i][j-3].color == 2 && mi[i][j-2].color == 2 && mi[i][j-1].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j+4 < 20 && mi[i][j+4].color == 1 && mi[i][j+3].color == 2 && mi[i][j+2].color == 2 && mi[i][j+1].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+4 < 20 && j-4 >= 0 && mi[i+4][j-4].color == 1 && mi[i+3][j-3].color == 2 && mi[i+2][j-2].color == 2 && mi[i+1][j-1].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+4 < 20 && mi[i+4][j].color == 1 && mi[i+3][j].color == 2 && mi[i+2][j].color == 2 && mi[i+1][j].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+4 < 20 && j+4 < 20 && mi[i+4][j+4].color == 1 && mi[i+3][j+3].color == 2 && mi[i+2][j+2].color == 2 && mi[i+1][j+1].color == 2 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;




				else if(i-3 >= 0 && j-3 >= 0 && mi[i-3][j-3].color == 0 && mi[i-2][j-2].color == 2 && mi[i-1][j-1].color == 2 && mi[i][j].color == 0 && mi[i+1][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-3 >= 0 && mi[i-3][j].color == 0 && mi[i-2][j].color == 2 && mi[i-1][j].color == 2 && mi[i][j].color == 0 && mi[i+1][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-3 >= 0 && j+3 < 20 && mi[i-3][j+3].color == 0 && mi[i-2][j+2].color == 2 && mi[i-1][j+1].color == 2 && mi[i][j].color == 0 && mi[i+1][j-1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j-3 >= 0 && mi[i][j-3].color == 0 && mi[i][j-2].color == 2 && mi[i][j-1].color == 2 && mi[i][j].color == 0 && mi[i][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j+3 < 20 && mi[i][j+3].color == 0 && mi[i][j+2].color == 2 && mi[i][j+1].color == 2 && mi[i][j].color == 0 && mi[i][j-1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+3 < 20 && j-3 >= 0 && mi[i+3][j-3].color == 0 && mi[i+2][j-2].color == 2 && mi[i+1][j-1].color == 2 && mi[i][j].color == 0 && mi[i-1][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+3 < 20 && mi[i+3][j].color == 0 && mi[i+2][j].color == 2 && mi[i+1][j].color == 2 && mi[i][j].color == 0 && mi[i-1][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+3 < 20 && j+3 < 20 && mi[i+3][j+3].color == 0 && mi[i+2][j+2].color == 2 && mi[i+1][j+1].color == 2 && mi[i][j].color == 0 && mi[i-1][j-1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;



				else if(i-2 >= 0 && i+2 < 20 && j-2 >= 0 && j+2 < 20 && mi[i-2][j-2].color == 0 && mi[i-1][j-1].color == 2 && mi[i][j].color == 0 && mi[i+1][j+1].color == 2 && mi[i+2][j+2].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-2 >= 0 && i+2 < 20 && j-2 >= 0 && j+2 < 20 && mi[i-2][j+2].color == 0 && mi[i-1][j+1].color == 2 && mi[i][j].color == 0 && mi[i+1][j-1].color == 2 && mi[i+2][j-2].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-2 >= 0 && i+2 < 20 && mi[i+2][j].color == 0 && mi[i+1][j].color == 2 && mi[i][j].color == 0 && mi[i-1][j].color == 2 && mi[i-2][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j-2 >= 0 && j+2 < 20 && mi[i][j-2].color == 0 && mi[i][j-1].color == 2 && mi[i][j].color == 0 && mi[i][j+1].color == 2 && mi[i][j+2].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
			}
		}

	}
	else // player == 1 , usr first
	{
		for(int i = 0; i < 20; i++)
		{
			for(int j = 0; j < 20; j++)
			{
				if(i-4 >= 0 && j-4 >= 0 && mi[i-4][j-4].color == 2 && mi[i-3][j-3].color == 1 && mi[i-2][j-2].color == 1 && mi[i-1][j-1].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-4 >= 0 && mi[i-4][j].color == 2 && mi[i-3][j].color == 1 && mi[i-2][j].color == 1 && mi[i-1][j].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-4 >= 0 && j+4 < 20 && mi[i-4][j+4].color == 2 && mi[i-3][j+3].color == 1 && mi[i-2][j+2].color == 1 && mi[i-1][j+1].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j-4 >= 0 && mi[i][j-4].color == 2 && mi[i][j-3].color == 1 && mi[i][j-2].color == 1 && mi[i][j-1].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j+4 < 20 && mi[i][j+4].color == 2 && mi[i][j+3].color == 1 && mi[i][j+2].color == 1 && mi[i][j+1].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+4 < 20 && j-4 >= 0 && mi[i+4][j-4].color == 2 && mi[i+3][j-3].color == 1 && mi[i+2][j-2].color == 1 && mi[i+1][j-1].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+4 < 20 && mi[i+4][j].color == 2 && mi[i+3][j].color == 1 && mi[i+2][j].color == 1 && mi[i+1][j].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+4 < 20 && j+4 < 20 && mi[i+4][j+4].color == 2 && mi[i+3][j+3].color == 1 && mi[i+2][j+2].color == 1 && mi[i+1][j+1].color == 1 && mi[i][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;




				else if(i-3 >= 0 && j-3 >= 0 && mi[i-3][j-3].color == 0 && mi[i-2][j-2].color == 1 && mi[i-1][j-1].color == 1 && mi[i][j].color == 0 && mi[i+1][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-3 >= 0 && mi[i-3][j].color == 0 && mi[i-2][j].color == 1 && mi[i-1][j].color == 1 && mi[i][j].color == 0 && mi[i+1][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-3 >= 0 && j+3 < 20 && mi[i-3][j+3].color == 0 && mi[i-2][j+2].color == 1 && mi[i-1][j+1].color == 1 && mi[i][j].color == 0 && mi[i+1][j-1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j-3 >= 0 && mi[i][j-3].color == 0 && mi[i][j-2].color == 1 && mi[i][j-1].color == 1 && mi[i][j].color == 0 && mi[i][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j+3 < 20 && mi[i][j+3].color == 0 && mi[i][j+2].color == 1 && mi[i][j+1].color == 1 && mi[i][j].color == 0 && mi[i][j-1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+3 < 20 && j-3 >= 0 && mi[i+3][j-3].color == 0 && mi[i+2][j-2].color == 1 && mi[i+1][j-1].color == 1 && mi[i][j].color == 0 && mi[i-1][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+3 < 20 && mi[i+3][j].color == 0 && mi[i+2][j].color == 1 && mi[i+1][j].color == 1 && mi[i][j].color == 0 && mi[i-1][j+1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i+3 < 20 && j+3 < 20 && mi[i+3][j+3].color == 0 && mi[i+2][j+2].color == 1 && mi[i+1][j+1].color == 1 && mi[i][j].color == 0 && mi[i-1][j-1].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;



				else if(i-2 >= 0 && i+2 < 20 && j-2 >= 0 && j+2 < 20 && mi[i-2][j-2].color == 0 && mi[i-1][j-1].color == 1 && mi[i][j].color == 0 && mi[i+1][j+1].color == 1 && mi[i+2][j+2].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-2 >= 0 && i+2 < 20 && j-2 >= 0 && j+2 < 20 && mi[i-2][j+2].color == 0 && mi[i-1][j+1].color == 1 && mi[i][j].color == 0 && mi[i+1][j-1].color == 1 && mi[i+2][j-2].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(i-2 >= 0 && i+2 < 20 && mi[i+2][j].color == 0 && mi[i+1][j].color == 1 && mi[i][j].color == 0 && mi[i-1][j].color == 1 && mi[i-2][j].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
				else if(j-2 >= 0 && j+2 < 20 && mi[i][j-2].color == 0 && mi[i][j-1].color == 1 && mi[i][j].color == 0 && mi[i][j+1].color == 1 && mi[i][j+2].color == 0)
					mi[i][j].dfvalue = mi[i][j].dfvalue+1;
			}
		}
	}
}
