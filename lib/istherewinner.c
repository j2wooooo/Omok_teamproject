#include<stdio.h>

void gotoxy();
extern int x, y;
extern map_info[20][20];

int istherewinner()

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (map_info[i][j] == 1 && map_info[i][j + 1] == 1 && map_info[i][j + 2] == 1 && map_info[i][j + 3] == 1 && map_info[i][j + 4] == 1)
			{
				printf("흑이 승리했습니다");
				return 0;
			}
			else if (map_info[i][j] == 1 && map_info[i + 1][j] == 1 && map_info[i + 2][j] == 1 && map_info[i + 3][j] == 1 && map_info[i + 4][j] == 1)
			{
					printf("흑이 승리했습니다");
					return 0;
			}
			else if (map_info[i][j] == 1 && map_info[i + 1][j - 1] == 1 && map_info[i + 2][j - 2] == 1 && map_info[i + 3][j - 3] == 1 && map_info[i + 4][j - 4] == 1)
			{
					printf("흑이 승리했습니다");
					return 0;
			}
			else if (map_info[i][j] == 1 && map_info[i + 1][j + 1] == 1 && map_info[i + 2][j + 2] == 1 && map_info[i + 3][j + 3] == 1 && map_info[i + 4][j + 4] == 1)
			{
					printf("흑이 승리했습니다");
					return 0;
			}

			if (map_info[i][j] == 2 && map_info[i][j + 1] == 2 && map_info[i][j + 2] == 2 && map_info[i][j + 3] == 2 && map_info[i][j + 4] == 2)
			{
					printf("백이 승리했습니다");
					return 0;
			}
			else if (map_info[i][j] == 2 && map_info[i + 1][j] == 2 && map_info[i + 2][j] == 2 && map_info[i + 3][j] == 2 && map_info[i + 4][j] == 2)
			{
					printf("백이 승리했습니다");
					return 0;
			}
			else if (map_info[i][j] == 2 && map_info[i + 1][j - 1] == 2 && map_info[i + 2][j - 2] == 2 && map_info[i + 3][j - 3] == 2 && map_info[i + 4][j - 4] == 2)
			{
					printf("백이 승리했습니다");
					return 0;
			}
			else if (map_info[i][j] == 2 && map_info[i + 1][j + 1] == 2 && map_info[i + 2][j + 2] == 2 && map_info[i + 3][j + 3] == 2 && map_info[i + 4][j + 4] == 2)
			{
					printf("백이 승리했습니다");
					return 0;
			}
		}
	}
}
