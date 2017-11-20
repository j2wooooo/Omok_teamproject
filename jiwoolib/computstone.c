#include<stdio.h>
#include<stdlib.h>
extern struct map_info
{
	int put;
	int color;
	int value;
};

extern int x;
extern int y;
void gotoxy(int x, int y);

extern struct map_info mi[20][20];

void computstone(int player)
{
	int exitflag = 0;

	// find put the location

	if (player == 2) {
		gotoxy(10,50);printf("computer");printf("○");sleep(1);
		gotoxy(x,y);
		mi[x][y/2].put = 1;
		mi[x][y/2].color = 1;

	}
	else{
		gotoxy(10,50);printf("computer");printf("●");sleep(1);
		gotoxy(x,y);
		mi[x][y/2].put = 1;
		mi[x][y/2].color = 2;

	}
	return;
}
