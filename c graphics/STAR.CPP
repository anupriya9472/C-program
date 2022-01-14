#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
int main()
{
int gd=0,gm,i=0;
clrscr();
initgraph(&gd,&gm,"");
printf("ANU PRIYA");
for(i=1;i<15;i++)
{
setcolor(i);
line(30,80,180,80);
line(30,80,105,230);
line(30,180,105,30);
line(30,180,180,180);
line(105,230,180,80);
line(105,30,180,180);
sleep(1);
}
getch();
closegraph();
return 0;
}