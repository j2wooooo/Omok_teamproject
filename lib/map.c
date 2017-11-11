#include <stdio.h>
#include <stdlib.h>
#include "map.h"

void map()
{
	system("clear");

	for (int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if(i == 0 && j == 0) // drawing start
				printf("┌");
			else if (i == 0 && j == 19)
				printf("┐");
			else if (i == 19 && j == 0)
				printf("└");
			else if (i == 19 && j == 19)
				printf("┘");
			else if (i == 0)
				printf("┬");
			else if (j == 0)
				printf("├");
			else if (j == 19)
				printf("┤");
			else if (i == 19)
				printf("┴");
			else
				printf("┼");
		}
		printf("\n");
	}
	return;
}
