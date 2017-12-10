#define BLACK -2
#define WHITE 2

extern int map_info[20][20];

int check444(int x, int y)
{
   int count = 0;
   // 가로체크. 
   if ((map_info[x][y / 2 - 4] == BLACK && map_info[x][y / 2 - 3] == WHITE && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == BLACK) ||
      (map_info[x][y / 2 + 4] == BLACK && map_info[x][y / 2 + 3] == WHITE && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 - 1] == BLACK) ||
      (map_info[x][y / 2 - 5] == BLACK && map_info[x][y / 2 - 4] == WHITE && map_info[x][y / 2 - 3] == BLACK && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == BLACK) ||
      (map_info[x][y / 2 + 5] == BLACK && map_info[x][y / 2 + 4] == WHITE && map_info[x][y / 2 + 3] == BLACK && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 - 1] == BLACK) ||
      (map_info[x][y / 2 - 5] == BLACK && map_info[x][y / 2 - 4] == WHITE && map_info[x][y / 2 - 3] == WHITE && map_info[x][y / 2 - 2] == BLACK && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == BLACK) ||
      (map_info[x][y / 2 + 5] == BLACK && map_info[x][y / 2 + 4] == WHITE && map_info[x][y / 2 + 3] == WHITE && map_info[x][y / 2 + 2] == BLACK && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 - 1] == BLACK) ||
      (map_info[x][y / 2 - 5] == BLACK && map_info[x][y / 2 - 4] == WHITE && map_info[x][y / 2 - 3] == WHITE && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == BLACK && map_info[x][y / 2 + 1] == BLACK) ||
      (map_info[x][y / 2 + 5] == BLACK && map_info[x][y / 2 + 4] == WHITE && map_info[x][y / 2 + 3] == WHITE && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 1] == BLACK && map_info[x][y / 2 - 1] == BLACK) ||
      (map_info[x][y / 2 - 3] == BLACK && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 + 2] == BLACK) ||
      (map_info[x][y / 2 + 3] == BLACK && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 - 2] == BLACK) ||
      (map_info[x][y / 2 - 4] == BLACK && map_info[x][y / 2 - 3] == WHITE && map_info[x][y / 2 - 2] == WHITE && map_info[x][y / 2 - 1] == BLACK && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 + 2] == BLACK) ||
      (map_info[x][y / 2 + 4] == BLACK && map_info[x][y / 2 + 3] == WHITE && map_info[x][y / 2 + 2] == WHITE && map_info[x][y / 2 + 1] == BLACK && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 - 2] == BLACK) ||
      (map_info[x][y / 2 - 4] == BLACK && map_info[x][y / 2 - 3] == WHITE && map_info[x][y / 2 - 2] == BLACK && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 + 2] == BLACK) ||
      (map_info[x][y / 2 + 4] == BLACK && map_info[x][y / 2 + 3] == WHITE && map_info[x][y / 2 + 2] == BLACK && map_info[x][y / 2 + 1] == WHITE && map_info[x][y / 2 - 1] == WHITE && map_info[x][y / 2 - 2] == BLACK))
      count++;
   // 세로체크. 
   if ((map_info[x - 4][y / 2] == BLACK && map_info[x - 3][y / 2] == WHITE && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == BLACK) ||
      (map_info[x + 4][y / 2] == BLACK && map_info[x + 3][y / 2] == WHITE && map_info[x + 2][y / 2] == WHITE && map_info[x + 1][y / 2] == WHITE && map_info[x - 1][y / 2] == BLACK) ||
      (map_info[x - 5][y / 2] == BLACK && map_info[x - 4][y / 2] == WHITE && map_info[x - 3][y / 2] == BLACK && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == BLACK) ||
      (map_info[x + 5][y / 2] == BLACK && map_info[x + 4][y / 2] == WHITE && map_info[x + 3][y / 2] == BLACK && map_info[x + 2][y / 2] == WHITE && map_info[x + 1][y / 2] == WHITE && map_info[x - 1][y / 2] == BLACK) ||
      (map_info[x - 5][y / 2] == BLACK && map_info[x - 4][y / 2] == WHITE && map_info[x - 3][y / 2] == WHITE && map_info[x - 2][y / 2] == BLACK && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == BLACK) ||
      (map_info[x + 5][y / 2] == BLACK && map_info[x + 4][y / 2] == WHITE && map_info[x + 3][y / 2] == WHITE && map_info[x + 2][y / 2] == BLACK && map_info[x + 1][y / 2] == WHITE && map_info[x - 1][y / 2] == BLACK) ||
      (map_info[x - 5][y / 2] == BLACK && map_info[x - 4][y / 2] == WHITE && map_info[x - 3][y / 2] == WHITE && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == BLACK && map_info[x + 1][y / 2] == BLACK) ||
      (map_info[x + 5][y / 2] == BLACK && map_info[x + 4][y / 2] == WHITE && map_info[x + 3][y / 2] == WHITE && map_info[x + 2][y / 2] == WHITE && map_info[x + 1][y / 2] == BLACK && map_info[x - 1][y / 2] == BLACK) ||
      (map_info[x - 3][y / 2] == BLACK && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == WHITE && map_info[x + 2][y / 2] == BLACK) ||
      (map_info[x + 3][y / 2] == BLACK && map_info[x + 2][y / 2] == WHITE && map_info[x + 1][y / 2] == WHITE && map_info[x - 1][y / 2] == WHITE && map_info[x - 2][y / 2] == BLACK) ||
      (map_info[x - 4][y / 2] == BLACK && map_info[x - 3][y / 2] == WHITE && map_info[x - 2][y / 2] == WHITE && map_info[x - 1][y / 2] == BLACK && map_info[x + 1][y / 2] == WHITE && map_info[x + 2][y / 2] == BLACK) ||
      (map_info[x + 4][y / 2] == BLACK && map_info[x + 3][y / 2] == WHITE && map_info[x + 2][y / 2] == WHITE && map_info[x + 1][y / 2] == BLACK && map_info[x - 1][y / 2] == WHITE && map_info[x - 2][y / 2] == BLACK) ||
      (map_info[x - 4][y / 2] == BLACK && map_info[x - 3][y / 2] == WHITE && map_info[x - 2][y / 2] == BLACK && map_info[x - 1][y / 2] == WHITE && map_info[x + 1][y / 2] == WHITE && map_info[x + 2][y / 2] == BLACK) ||
      (map_info[x + 4][y / 2] == BLACK && map_info[x + 3][y / 2] == WHITE && map_info[x + 2][y / 2] == BLACK && map_info[x + 1][y / 2] == WHITE && map_info[x - 1][y / 2] == WHITE && map_info[x - 2][y / 2] == BLACK))
      count++;
   // 대각선체크. 
   if ((map_info[x - 4][y / 2 - 4] == BLACK && map_info[x - 3][y / 2 - 3] == WHITE && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == BLACK) ||
      (map_info[x + 4][y / 2 + 4] == BLACK && map_info[x + 3][y / 2 + 3] == WHITE && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x - 1][y / 2 - 1] == BLACK) ||
      (map_info[x - 5][y / 2 - 5] == BLACK && map_info[x - 4][y / 2 - 4] == WHITE && map_info[x - 3][y / 2 - 3] == BLACK && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == BLACK) ||
      (map_info[x + 5][y / 2 + 5] == BLACK && map_info[x + 4][y / 2 + 4] == WHITE && map_info[x + 3][y / 2 + 3] == BLACK && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x - 1][y / 2 - 1] == BLACK) ||
      (map_info[x - 5][y / 2 - 5] == BLACK && map_info[x - 4][y / 2 - 4] == WHITE && map_info[x - 3][y / 2 - 3] == WHITE && map_info[x - 2][y / 2 - 2] == BLACK && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == BLACK) ||
      (map_info[x + 5][y / 2 + 5] == BLACK && map_info[x + 4][y / 2 + 4] == WHITE && map_info[x + 3][y / 2 + 3] == WHITE && map_info[x + 2][y / 2 + 2] == BLACK && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x - 1][y / 2 - 1] == BLACK) ||
      (map_info[x - 5][y / 2 - 5] == BLACK && map_info[x - 4][y / 2 - 4] == WHITE && map_info[x - 3][y / 2 - 3] == WHITE && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == BLACK && map_info[x + 1][y / 2 + 1] == BLACK) ||
      (map_info[x + 5][y / 2 + 5] == BLACK && map_info[x + 4][y / 2 + 4] == WHITE && map_info[x + 3][y / 2 + 3] == WHITE && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == BLACK && map_info[x - 1][y / 2 - 1] == BLACK) ||
      (map_info[x - 3][y / 2 - 3] == BLACK && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x + 2][y / 2 + 2] == BLACK) ||
      (map_info[x + 3][y / 2 + 3] == BLACK && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x - 2][y / 2 - 2] == BLACK) ||
      (map_info[x - 4][y / 2 - 4] == BLACK && map_info[x - 3][y / 2 - 3] == WHITE && map_info[x - 2][y / 2 - 2] == WHITE && map_info[x - 1][y / 2 - 1] == BLACK && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x + 2][y / 2 + 2] == BLACK) ||
      (map_info[x + 4][y / 2 + 4] == BLACK && map_info[x + 3][y / 2 + 3] == WHITE && map_info[x + 2][y / 2 + 2] == WHITE && map_info[x + 1][y / 2 + 1] == BLACK && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x - 2][y / 2 - 2] == BLACK) ||
      (map_info[x - 4][y / 2 - 4] == BLACK && map_info[x - 3][y / 2 - 3] == WHITE && map_info[x - 2][y / 2 - 2] == BLACK && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x + 2][y / 2 + 2] == BLACK) ||
      (map_info[x + 4][y / 2 + 4] == BLACK && map_info[x + 3][y / 2 + 3] == WHITE && map_info[x + 2][y / 2 + 2] == BLACK && map_info[x + 1][y / 2 + 1] == WHITE && map_info[x - 1][y / 2 - 1] == WHITE && map_info[x - 2][y / 2 - 2] == BLACK))
      count++;
   // 반대 대각선체크. 
   if ((map_info[x - 4][y / 2 + 4] == BLACK && map_info[x - 3][y / 2 + 3] == WHITE && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == BLACK) ||
      (map_info[x + 4][y / 2 - 4] == BLACK && map_info[x + 3][y / 2 - 3] == WHITE && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x - 1][y / 2 + 1] == BLACK) ||
      (map_info[x - 5][y / 2 + 5] == BLACK && map_info[x - 4][y / 2 + 4] == WHITE && map_info[x - 3][y / 2 + 3] == BLACK && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == BLACK) ||
      (map_info[x + 5][y / 2 - 5] == BLACK && map_info[x + 4][y / 2 - 4] == WHITE && map_info[x + 3][y / 2 - 3] == BLACK && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x - 1][y / 2 + 1] == BLACK) ||
      (map_info[x - 5][y / 2 + 5] == BLACK && map_info[x - 4][y / 2 + 4] == WHITE && map_info[x - 3][y / 2 + 3] == WHITE && map_info[x - 2][y / 2 + 2] == BLACK && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == BLACK) ||
      (map_info[x + 5][y / 2 - 5] == BLACK && map_info[x + 4][y / 2 - 4] == WHITE && map_info[x + 3][y / 2 - 3] == WHITE && map_info[x + 2][y / 2 - 2] == BLACK && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x - 1][y / 2 + 1] == BLACK) ||
      (map_info[x - 5][y / 2 - 5] == BLACK && map_info[x - 4][y / 2 + 4] == WHITE && map_info[x - 3][y / 2 + 3] == WHITE && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == BLACK && map_info[x + 1][y / 2 - 1] == BLACK) ||
      (map_info[x + 5][y / 2 + 5] == BLACK && map_info[x + 4][y / 2 - 4] == WHITE && map_info[x + 3][y / 2 - 3] == WHITE && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == BLACK && map_info[x - 1][y / 2 + 1] == BLACK) ||
      (map_info[x - 3][y / 2 + 3] == BLACK && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x + 2][y / 2 - 2] == BLACK) ||
      (map_info[x + 3][y / 2 - 3] == BLACK && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x - 2][y / 2 + 2] == BLACK) ||
      (map_info[x - 4][y / 2 + 4] == BLACK && map_info[x - 3][y / 2 + 3] == WHITE && map_info[x - 2][y / 2 + 2] == WHITE && map_info[x - 1][y / 2 + 1] == BLACK && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x + 2][y / 2 - 2] == BLACK) ||
      (map_info[x + 4][y / 2 - 4] == BLACK && map_info[x + 3][y / 2 - 3] == WHITE && map_info[x + 2][y / 2 - 2] == WHITE && map_info[x + 1][y / 2 - 1] == BLACK && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x - 2][y / 2 + 2] == BLACK) ||
      (map_info[x - 4][y / 2 + 4] == BLACK && map_info[x - 3][y / 2 + 3] == WHITE && map_info[x - 2][y / 2 + 2] == BLACK && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x + 2][y / 2 - 2] == BLACK) ||
      (map_info[x + 4][y / 2 - 4] == BLACK && map_info[x + 3][y / 2 - 3] == WHITE && map_info[x + 2][y / 2 - 2] == BLACK && map_info[x + 1][y / 2 - 1] == WHITE && map_info[x - 1][y / 2 + 1] == WHITE && map_info[x - 2][y / 2 + 2] == BLACK))
      count++;
   if (count > 1) return 1;
   else return 0;
}
