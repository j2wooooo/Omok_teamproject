#include <stdio.h>
#include <stdlib.h>
#include "map.h"

extern struct map_info
{
	int put; // 돌을 놓을 수 있는 자리인지 확인하는 변수
	int color; // 돌이 있다면 무슨 색 돌이 있는지 확인하는 변수
	int value; // 가중치
};

struct map_info mi[20][20];

void map_modify()
{
	int i = 0;
	int j = 0;

	system("clear");

	for(i = 0; i < 20; i ++) // 변수 초기화
	{
		for(j = 0; j < 20; j++)
		{
			mi[i][j].color = 0;
			mi[i][j].value = 0;
		}

	}


	for (i = 0; i < 20; i++)
	{
		for(j = 0; j < 20; j++)
		{
			if(i == 0 && j == 0){ // drawing start
				mi[i][j].put = 1;
				printf("┌─");}
			else if (i == 0 && j == 19){
				mi[i][j].put = 1;
				printf("┐");}
			else if (i == 19 && j == 0){
				mi[i][j].put = 1;
				printf("└─");}
			else if (i == 19 && j == 19){
				mi[i][j].put = 1;
				printf("┘");}
			else if (i == 0){
				mi[i][j].put = 1;
				printf("┬─");}
			else if (j == 0){
				mi[i][j].put = 1;
				printf("├ ");}
			else if (j == 19){
				mi[i][j].put = 1;
				printf("┤");}
			else if (i == 19){
				mi[i][j].put = 1;
				printf("┴─");}
			else
				printf("．");
		}
		printf("\n");
	}
	return;
}
