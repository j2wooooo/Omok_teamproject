#include<stdio.h>

struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

extern struct map_info mi[20][20];


int findlargestatvalue()
{
	int largest = 0;
	int largest_index = 0;
	int i,j;
	for(i = 0; i < 20; i++)
	{
		for(j = 0; j < 20; j++)
		{
			if(mi[i][j].put == 0 && mi[i][j].atvalue > largest)
			{
				largest = mi[i][j].atvalue;
				largest_index = i*100 + j*2;

			}
		}
	}
	if(largest == 0)
	{
		return 100000;
	}
	return largest_index;
}
