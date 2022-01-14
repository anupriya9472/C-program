#include<conio.h>
#include<graphics.h>
//#include<dos.h>
int main()
{
int gd=0,gm,x,a=270,b=260,c=3,y=30;
int i=240,j=300;
clrscr();
initgraph(&gd,&gm,"");
for(x=30;x<270;x+=30)
{
setcolor(c);
line(i,260,j,260);
setfillstyle(1,c);
ellipse(270,260,0,180,x,y);
floodfill(a,b,c);
c++,y+=30,a-=35,b-=35,i-=30,j+=30;
//sleep(1);
}
getch();
closegraph();
restorecrtmode();
return 0;
}