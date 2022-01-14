#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int gd=0,gm,x,c=4;
clrscr();
initgraph(&gd,&gm,"");
for(x=30;x<200;x+=30)
{
setcolor(c);
circle(300,250,x);
c++;
sleep(1);
}
getch();
closegraph();
return 0;
}