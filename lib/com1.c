#include <stdio.h>
#include "map.h"
#include "getch.h"
#include "gotoxy.h"

extern int map_info[20][40];
extern int x; int y;

void checkEverywhere(int x, int y)
{
 
}

void com1()
{
	int flag = 0; // 0->user, 1->com
	char dir;

	while(1){
	        if(flag == 0){
			dir = getch();
                	switch (dir) {
                	case 'w':
                        	if(x-1 > 1)
                                	x-=1;
                        	break;
                	case 'a':
                        	if(y-2 > 0)
                                	y -= 2;
                        	break;
                	case 's':
                        	if(x+1 < 20)
                                	x += 1;
                        	break;
                	case 'd':
                        	if(y+2 < 40)
                                	y += 2;
                        	break;
                	case ' ':
                       		if (map_info[x][y] == 0)
                        	{ // if empty location
                                	printf("●");
					flag = 1; // com turn
                        	}
                	}
                        gotoxy(x,y);
		}
		else{ // com mode
			checkEverywhere(x,y);
			flag = 0; // user turn
		}
        }
}
