#include <stdio.h>
#include <stdlib.h>
#include "../include/getch.h"

int selectplayer()
{
	int player = 0;

	system("clear");

	printf("\n\n\n\n\n\tselet the first player");
	printf("\n\n\t  user first : [u]");
	printf("\n\n\t computer first : [c]");

	int ch = 0;

	while(1)
	{
		ch = getch();

		switch(ch){

		case 'u':
			player = 1; // user first
			return player;
		case 'c':
			player = 2; // computer first
			return player;
		}

		if(ch != 10 && player == 0)
		{
			printf("\n\t\ttry again");
		}
	}
}
