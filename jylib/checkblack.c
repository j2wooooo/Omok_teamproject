#include <stdio.h>

#define BLACK 1
#define WHITE 2

extern int map_info[20][40];
int black = 0; // num of black stones

void checkblack(int x, int y)
{
        int row[20]; // 행과 열의 흑돌 개수를 카운트하여 배열에 저장
        int column[20];
        int x1 = x; int x2 = y; // tmp x, y

        for(int i = 0; i < 20; i++){
                for(int j = 0; j < 40; j+=2){
                        printf("%d ", map_info[i][j]);
                }
                printf("\n");
        }

        for(int x1 = 0; x1 < 20; x1++){ // check column
                for(int y1 = 0; y1 < 40; y1+=2){
                        if(map_info[x1][y1] == BLACK){
                                black++;
                        }
                row[x1] = black;
                black = 0;
                }
}
        for(int y1 = 0; y1 < 40; y1+=2){ // check row
                for(int x1 = 0; x1 < 20; x1++){
                        if(map_info[x1][y1] == 1){
                                black++;
                        }
                column[y1] = black;
                black = 0;
                }
        }


        for(int i = 0; i < 20; i++)
                printf("%d ", row[i]);printf("\n");
	printf("\n");
        for(int i = 0; i < 20; i++) 
                printf("%d ", column[i]);
}
