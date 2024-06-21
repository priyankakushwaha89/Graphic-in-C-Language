#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");

//rectangle(left,top,right,bottom); //syntax

rectangle(50,50,150,100);//Horizontal rectangle
rectangle(150,160,200,250); //vertical rectangle
rectangle(300,300,400,400);//Square
getch();
closegraph();
}