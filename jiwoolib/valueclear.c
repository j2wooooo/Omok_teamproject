#include<stdio.h>

struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

extern struct map_info mi[20][20];

void valueclear()
{
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			mi[i][j].dfvalue = 0;
			mi[i][j].atvalue = 0;
		}
	}
	return;
}
