#include <stdio.h>
#define BLACK 2
#define WHITE -2

extern int map_info[20][20];

int check33(int x, int y)
{
   int count = 0;
   // 가로체크. 
   if ((map_info[x][y / 2 - 3] == 0 && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == 0) ||
      (map_info[x][y / 2 - 2] == 0 && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 + 2] == 0) ||
      (map_info[x][y / 2 - 1] == 0 && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 3] == 0) ||
      (map_info[x][y / 2 - 4] == 0 && map_info[x][y / 2 - 3] == WHITE && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == 0 && map_info[x][y / 2 + 1] == 0) ||
      (map_info[x][y / 2 + 4] == 0 && map_info[x][y / 2 + 3] == WHITE && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 1] == 0 && map_info[x][y / 2 - 1] == 0) ||
      (map_info[x][y / 2 - 2] == 0 && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == 0 && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 3] == 0) ||
      (map_info[x][y / 2 + 2] == 0 && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 - 1] == 0 && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 3] == 0))
      count++;
   // 세로체크. 
   if ((map_info[x - 3][y / 2] == 0 && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == 0) ||
      (map_info[x - 2][y / 2] == 0 && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == WHITE && map_info[x + 2][y / 2] == 0) ||
      (map_info[x - 1][y / 2] == 0 && map_info[x + 1][y / 2] == WHITE && map_info[x + 2][y / 2] == WHITE && map_info[x + 3][y / 2] == 0) ||
      (map_info[x - 4][y / 2] == 0 && map_info[x - 3][y / 2] == WHITE && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == 0 && map_info[x + 1][y / 2] == 0) ||
      (map_info[x + 4][y / 2] == 0 && map_info[x + 3][y / 2] == WHITE && map_info[x + 2][y / 2] == WHITE && map_info[x + 1][y / 2] == 0 && map_info[x - 1][y / 2] == 0) ||
      (map_info[x - 2][y / 2] == 0 && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == 0 && map_info[x + 2][y / 2] == WHITE && map_info[x + 3][y / 2] == 0) ||
      (map_info[x + 2][y / 2] == 0 && map_info[x + 1][y / 2] == WHITE && map_info[x - 1][y / 2] == 0 && map_info[x - 2][y / 2] == WHITE && map_info[x - 3][y / 2] == 0))
      count++;
   // 대각선체크. 
   if ((map_info[x - 3][y / 2 - 3] == 0 && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == 0) ||
      (map_info[x - 2][y / 2 - 2] == 0 && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x + 2][y / 2 + 2] == 0) ||
      (map_info[x - 1][y / 2 - 1] == 0 && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 3][y / 2 + 3] == 0) ||
      (map_info[x - 3][y / 2 - 3] == 0 && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == 0 && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x + 2][y / 2 + 2] == 0) ||
      (map_info[x + 3][y / 2 + 3] == 0 && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == 0 && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x - 2][y / 2 - 2] == 0) ||
      (map_info[x - 4][y / 2 - 4] == 0 && map_info[x - 3][y / 2 - 3] == WHITE && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == 0 && map_info[x + 1][y / 2 + 1] == 0) ||
      (map_info[x + 4][y / 2 + 4] == 0 && map_info[x + 3][y / 2 + 3] == WHITE && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == 0 && map_info[x - 1][y / 2 - 1] == 0))
      count++;
   // 반대 대각선체크. 
   if ((map_info[x - 3][y / 2 + 3] == 0 && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == 0) ||
      (map_info[x - 2][y / 2 + 2] == 0 && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x + 2][y / 2 - 2] == 0) ||
      (map_info[x - 1][y / 2 + 1] == 0 && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 3][y / 2 - 3] == 0) ||
      (map_info[x - 3][y / 2 + 3] == 0 && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == 0 && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x + 2][y / 2 - 2] == 0) ||
      (map_info[x + 3][y / 2 - 3] == 0 && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == 0 && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x - 2][y / 2 + 2] == 0) ||
      (map_info[x - 4][y / 2 + 4] == 0 && map_info[x - 3][y / 2 + 3] == WHITE && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == 0 && map_info[x + 1][y / 2 - 1] == 0) ||
      (map_info[x + 4][y / 2 - 4] == 0 && map_info[x + 3][y / 2 - 3] == WHITE && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == 0 && map_info[x - 1][y / 2 + 1] == 0))
      count++;

   //printf("check33");
   if (count > 1) return 1;
   else return 0;
}
