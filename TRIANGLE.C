#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void main()
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 line(400,200,250,450);
 line(250,450,500,450);
 line(400,200,500,450);
 getch();
 closegraph();
}