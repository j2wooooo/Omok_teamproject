#include "../include/gotoxy.h"
#include<stdio.h>
#include<stdlib.h>
#include "../jwinclude/makedfvaluemap.h"
#include "../jwinclude/makeatvaluemap.h"
#include "../jwinclude/findlargestdfvalue.h"
#include "../jwinclude/findlargestatvalue.h"
#include "../jwinclude/valueclear.h"

struct map_info
{
	int put;
	int color;
	int dfvalue;
	int atvalue;
};

extern int x;
extern int y;

extern struct map_info mi[20][20];

void computstone(int player)
{
	int exitflag = 0;

	// defend
	valueclear();
	makeatvaluemap(player);
	makedfvaluemap(player);
	int dfv = findlargestdfvalue();// find put the location
	int atv = findlargestatvalue();
	int pos = 0;
	//printf("%d %d", dfv, atv);

	// atteck
	printf("\n\n\n\n\n\n\n\n\n");
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			printf("%d", mi[i][j].color);
		}
		printf("\n");
	}
			int a=1;
			int b=1;
			int c=rand()%2;
	if(atv == 100000 && dfv == 100000) // first put
	{


			if(c == 0 && mi[x+a][y+2*b].put != 1)
			{
				y = y+b;
				//break;
			}
			else if(c == 0 && mi[x-a][y-2*b].put != 1)
			{
				y = y-b;
				//break;
			}
			else if(c == 1 && mi[x+a][y].put != 1)
			{
				x = x+a;
				//break;
			}
			else if(c == 1 && mi[x-a][y].put != 1)
			{
				x = x-a;
				//break;
			}
	}
	else if(atv = 100000 && dfv != 100000)
	{
		pos = dfv;
		x = pos/100;
		y = pos%100;
	}
	else if(atv != 100000 && dfv == 100000)
	{
		pos = atv;
		x = pos/100;
		y = pos%100;
	}
	else
	{
		if(mi[dfv/100][dfv%100/2].dfvalue >= mi[atv/100][atv%100/2].atvalue)
		{
			pos = dfv;
		}
		else
		{
			pos = atv;
		}
		x = pos/100;
		y = pos%100;

	}

	//printf("\n\n%d\n",pos);
	//printf("%d%d",x,y);

	if (player == 2)
	{
		//gotoxy(10,50);printf("computer");printf("○");
		sleep(1);
		gotoxy(x,y);
		printf("○");
		mi[x][y/2].put = 1;
		mi[x][y/2].color = 1;

	}
	else
	{
		//gotoxy(10,50);printf("computer");printf("●");
		sleep(1);
		gotoxy(x,y);
		printf("●");
		mi[x][y/2].put = 1;
		mi[x][y/2].color = 2;

	}
	return;
}
