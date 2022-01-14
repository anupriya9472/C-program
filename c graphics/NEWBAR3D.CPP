#include<conio.h>
#include<graphics.h>
int main()
{
int gd=0,gm;
clrscr();
initgraph(&gd,&gm,"");
setfillstyle(1,8);
bar3d(100,50,400,300,10,1);
setcolor(14);
outtextxy(150,100,"anu priya");
getch();
closegraph();
return 0;
}