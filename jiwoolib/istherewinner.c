#include<stdio.h>

void gotoxy();
extern struct map_info
{
	int push;
	int color;
	int dfvalue;
	int atvalue;
};
extern int x, y;
struct map_info mi[20][20];

int istherewinner()
{

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (mi[i][j].color == 1 && mi[i][j + 1].color == 1 && mi[i][j + 2].color == 1 && mi[i][j + 3].color == 1 && mi[i][j + 4].color == 1)
			{
				return 1;
			}
			else if (mi[i][j].color == 1 && mi[i + 1][j].color == 1 && mi[i + 2][j].color == 1 && mi[i + 3][j].color == 1 && mi[i + 4][j].color == 1)
			{
				return 1;
			}
			else if (mi[i][j].color == 1 && mi[i + 1][j - 1].color == 1 && mi[i + 2][j - 2].color == 1 && mi[i + 3][j - 3].color == 1 && mi[i + 4][j - 4].color == 1)
			{
				return 1;
			}
			else if (mi[i][j].color == 1 && mi[i + 1][j + 1].color == 1 && mi[i + 2][j + 2].color == 1 && mi[i + 3][j + 3].color == 1 && mi[i + 4][j + 4].color == 1)
			{
				return 1;
			}

			if (mi[i][j].color == 2 && mi[i][j + 1].color == 2 && mi[i][j + 2].color == 2 && mi[i][j + 3].color == 2 && mi[i][j + 4].color == 2)
			{
				return 2;
			}
			else if (mi[i][j].color == 2 && mi[i + 1][j].color == 2 && mi[i + 2][j].color == 2 && mi[i + 3][j].color == 2 && mi[i + 4][j].color == 2)
			{
				return 2;
			}
			else if (mi[i][j].color == 2 && mi[i + 1][j - 1].color == 2 && mi[i + 2][j - 2].color == 2 && mi[i + 3][j - 3].color == 2 && mi[i + 4][j - 4].color == 2)
			{
				return 2;
			}
			else if (mi[i][j].color == 2 && mi[i + 1][j + 1].color == 2 && mi[i + 2][j + 2].color == 2 && mi[i + 3][j + 3].color == 2 && mi[i + 4][j + 4].color == 2)
			{
				return 2;
			}
		}
	}
}
