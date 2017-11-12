#include<stdio.h>
extern int x ,y;

void gotoxy(int x,int y)
{
	printf("\033[%dd\033[%dG",x,y);
	fflush(stdout);
}
