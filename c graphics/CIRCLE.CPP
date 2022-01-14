#include<conio.h>
#include<graphics.h>
int main()
{
int gd=0,gm;
clrscr();
initgraph(&gd,&gm,"");
setcolor(4);
setfillstyle(1,14);
fillellipse(100,100,50,25);
circle(200,200,50);
floodfill(200,200,4);
getch();
closegraph();
return 0;
}