#include<conio.h>
#include<graphics.h>
int main()
{
int gd=0,gm;
clrscr();
initgraph(&gd,&gm,"");
setcolor(14);
outtext("Anu");
setcolor(1);
outtextxy(50,50,"Priya");
getch();
closegraph();
return 0;
}