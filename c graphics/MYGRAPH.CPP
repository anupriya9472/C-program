#include<conio.h>
#include<stdio.h>
#include<graphics.h>
main()
{
int gd=0,gm;
clrscr();
initgraph(&gd,&gm,"");
setcolor(4);
line(20,50,100,50);
setcolor(2);
circle(160,100,50);
setcolor(14);
rectangle(200,200,350,250);
setcolor(5);
fillellipse(50,200,50,20);
getch();
closegraph();
return 0;
}