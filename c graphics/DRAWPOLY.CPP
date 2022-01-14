#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
int maxx,maxy;
int ar[8];
int gd=0,gm,x,y;
clrscr();
initgraph(&gd,&gm,"");
setcolor(1);
outtextxy(30,20,"NONCOMMON SHAPE");
setcolor(4);
maxx=getmaxx();
maxy=getmaxy();
ar[0]=20;
ar[1]=40;
ar[2]=60;
ar[3]=80;
ar[4]=maxx/3;
ar[5]=maxy/3;
ar[6]=ar[0];
ar[7]=ar[1];
drawpoly(4,ar);
getch();
closegraph();
restorecrtmode();
}