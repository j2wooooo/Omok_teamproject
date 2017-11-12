#include <stdio.h>
#include <stdlib.h>
#include "map.h"

// 돌을 놓을 수 있는 위치를 0으로 초기화 해놓음
int map_info[20][20] = {0};

// graw map using map_info array
void map()
{
	system("clear");

	for (int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 20; j++)
		{
			if(i == 0 && j == 0){ // drawing start
				map_info[i][j] = 1;
				printf("┌─");}
			else if (i == 0 && j == 19){
				map_info[i][j] = 1;
				printf("┐");}
			else if (i == 19 && j == 0){
				map_info[i][j] = 1;
				printf("└─");}
			else if (i == 19 && j == 19){
				map_info[i][j] = 1;
				printf("┘");}
			else if (i == 0){
				map_info[i][j] = 1;
				printf("┬─");}
			else if (j == 0){
				map_info[i][j] = 1;
				printf("├ ");}
			else if (j == 19){
				map_info[i][j] = 1;
				printf("┤");}
			else if (i == 19){
				map_info[i][j] = 1;
				printf("┴─");}
			else
				printf("．");
		}
		printf("\n");
	}
	return;
}
