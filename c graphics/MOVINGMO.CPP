#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
int gd=0,gm,x,y;
clrscr();
initgraph(&gd,&gm,"");
setcolor(9);
for(x=30;x<400;x+=10)
{
fillellipse(x,50,30,30);
sleep(1);
clrscr();
}
closegraph();
restorecrtmode();
return 0;
}