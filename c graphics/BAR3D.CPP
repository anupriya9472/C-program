#include<conio.h>
#include<graphics.h>
int main()
{
int gd=0,gm;
clrscr();
initgraph(&gd,&gm,"");
bar(100,50,150,150);
bar3d(200,50,250,150,10,1);
getch();
closegraph();
return 0;
}