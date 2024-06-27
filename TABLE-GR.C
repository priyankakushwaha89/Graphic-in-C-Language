#include<graphics.h>
#include<conio.h>
void main()
{
 int gd=DETECT,gm;
 int y,x;
 initgraph(&gd,&gm,"c:\\turboc3\\bgi");

 line(90,50,320,50);
 line(90,50,90,250);
 line(320,50,320,250);
 line(90,250,320,250);
 line(90,70,320,70);
 line(220,50,220,250);
 outtextxy(110,60,"No. of people");
 outtextxy(250,60,"fruit");

for(y=0;y<150;y=y+30) //we want to print 5 line so incrementing y by 30 then last number will be 150
{
line(90,100+y,320,100+y);
}
//number of people
outtextxy(150,90,"0");
outtextxy(150,120,"10");
outtextxy(150,150,"20");
outtextxy(150,180,"30");
outtextxy(150,210,"40");
outtextxy(150,240,"50");

//number of fruits
outtextxy(250,90,"APPLE");
outtextxy(250,120,"BANANA");
outtextxy(250,150,"GRAPHES");
outtextxy(250,180,"KIWI");
outtextxy(250,210,"ORANGE");
outtextxy(250,240,"PEARS");
//drawing graph
line(370,50,370,350);
line(370,350,700,350);
outtextxy(350,50,"60");
outtextxy(350,100,"50");
outtextxy(350,150,"40");
outtextxy(350,200,"30");
outtextxy(350,250,"20");
outtextxy(350,300,"10");
outtextxy(350,350,"0");

setfillstyle(LINE_FILL,RED);
bar(380,150,400,350);
settextstyle(0,1,1);
outtextxy(390,355,"APPLE");

setfillstyle(LINE_FILL,GREEN);
bar(410,100,430,350);
settextstyle(0,1,1);
outtextxy(420,355,"BANANA");

setfillstyle(LINE_FILL,6);
bar(440,200,460,350);
settextstyle(0,1,1);
outtextxy(450,355,"GRAPHES");

setfillstyle(LINE_FILL,5);
bar(470,270,490,350);
settextstyle(0,1,1);
outtextxy(480,355,"KIWI");

setfillstyle(LINE_FILL,YELLOW);
bar(500,170,520,350);
settextstyle(0,1,1);
outtextxy(510,355,"ORANGE");

setfillstyle(LINE_FILL,BLUE);
bar(530,250,550,350);
settextstyle(0,1,1);
outtextxy(540,355,"PEARS");

settextstyle(0,0,1);
outtextxy(500,430,"FRUITS");

settextstyle(0,1,0);
outtextxy(340,200,"NO. of people");
 getch();
 closegraph();
}