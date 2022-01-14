#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int gd=0,gm,i;
clrscr();
initgraph(&gd,&gm,"");
for(i=1;i<15;i++)
{
clrscr();
setcolor(4);
setfillstyle(1,14);
circle(150,150,100);
floodfill(150,150,4);
if(i%2!=0)
{
ellipse(150,160,180,360,50,60);
setcolor(0);
circle(100,100,20);
circle(200,100,20);
}
else
{
ellipse(150,220,0,180,60,60);
setcolor(0);
ellipse(100,120,200,340,20,20);
ellipse(200,120,200,340,20,20);
}
sleep(2);
}
//getch();
closegraph();
return 0;
}