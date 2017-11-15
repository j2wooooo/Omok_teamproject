#include <stdio.h>
#include "map.h"
#include "getch.h"
#include "gotoxy.h"

extern int map_info[20][20];
extern int x; int y;

void com1()
{
	int color = 2;
	char dir;

	while(1){
	        dir = getch();
                switch (dir) {
                case 'w':
                        if(x-1 > 1)
                                x-=1;
                        break;
                case 'a':
                        if(y-2 > 1)
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
                        //if (map_info[x][y] == 0)
                       //{
                                if (color == 1) {
                                        printf("○");
                                //        map_info[x][y] = 1;
                                //      a[x][y] = 1; // color
                                        color = 2;
                                }
                                else if (color == 2) {
                                        printf("●");
                                //        map_info[x][y] = 1;
                                //      a[x][y] = 2; // color
                                }
                       //}
                }
                //if (map_info[x][y] != 1)
                //{
                        gotoxy(x,y);
                        //printf("%d %d\n", x,y);
                //}
        }
}
