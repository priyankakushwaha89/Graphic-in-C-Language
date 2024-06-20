#include<graphics.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
outtext("HELLO");
outtextxy(100,100,"MORNING");
getch();
closegraph();
}