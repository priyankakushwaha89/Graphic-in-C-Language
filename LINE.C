#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

line(200,0,200,600);
line(400,0,400,600);
line(200,100,400,100);
line(200,200,400,200);
line(200,300,400,300);
line(200,400,400,400);
line(200,500,400,500);
getch();
closegraph();
}