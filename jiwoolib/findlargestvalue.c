#include<stdio.h>
extern struct map_info
{
	int put;
	int color;
	int value;
};

struct map_info mi[20][20];


int findlargestvalue()
{
	int largest = 0;
	int largest_index = 0;
	int i,j;
	for(i = 0; i < 20; i++)
	{
		for(j = 0; j < 20; j++)
		{
			if(mi[i][j].put == 0 && mi[i][j].value > largest)
			{
				largest = mi[i][j].value;
				largest_index = i*100 + j;
				
			}
		}
	}
	return largest_index;
}
