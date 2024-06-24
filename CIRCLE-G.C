#include<graphics.h>
#include<conio.h>
#include<DOS.h>

void main()
{
 int gd=DETECT,gm;
 int x,y,radius;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 x=getmaxx()/2;
 y=getmaxy()/2;

 for(radius=10;radius<=200;radius++)
 {
 delay(100);
 setcolor(radius/10);
 circle(x,y,radius);
 }
 getch();
 closegraph();
}


