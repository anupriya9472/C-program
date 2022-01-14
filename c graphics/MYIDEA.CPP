#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int gd=0,gm,x=200,y=110;
int i,j,x1=200,y1=70;
initgraph(&gd,&gm,"");
for(i=1;i<=60;i++)
{
 line(200,200,x,y);
 line(200,200,x1,y1);
 if(i>0&&i<30)
 {
   if(i<15)
   {
   x1+=9;
   y1+=9;
   }
   else if(i==15)
   {x1=330,y1=200;}
   else
   {
    x1-=9,y1+=9;}
 }
 else
 {
   if(i==30)
   {
    x1=200,y1=330;
   }
   else if(i>30&&i<45)
   {
   x1-=9,y1-=9;}
   else if(i==45)
   {
    x1=70,y1=200;
   }
   else
   {
   x1+=9,y1-=9;}
 }
sleep(1);
}
getch();
closegraph();
return 0;
}