#include<stdio.h>
#include<stdlib.h> // system function

int display_menu(void)
{
	int menu = 0;

	while(1)
	{
		system("clear");
		printf("\n\n\n\t\t\t\t          오  목  게  임    ");
		printf("\n\n\t\t\t☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★");
		printf("\n\n\t\t\t\t          게  임  메  뉴\t");
		printf("\n\n\t\t\t☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★");
		printf("\n\n\t\t\t         =\t  (1) 게임 설명       =");
		printf("\n\n\t\t\t         =\t  (2) 1:1 게임\t      =");
		printf("\n\n\t\t\t         =\t  (3) com 초급\t      =");
		printf("\n\n\t\t\t         =\t  (4) com 중급\t      =");
		printf("\n\n\t\t\t         =\t  (5) com 고급\t      =");
		printf("\n\n\t\t\t         =\t  (6) 종료\t      =");
		printf("\n\n\t\t\t☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★ ☆ ★");
		printf("\n\n\t\t\t\t\t    선택 : ");
		scanf("%d",&menu);
		if(menu < 1 || menu > 6)
		{
			continue;
		}
		else
		{
			return menu;
		}
	}
	return 0;
}
