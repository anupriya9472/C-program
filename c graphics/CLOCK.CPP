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
 clrscr();
 setcolor(0);
 circle(200,200,150);
 setcolor(4);
 outtextxy(200,60,"12");
 outtextxy(200,340,"6");
 outtextxy(60,200,"9");
 outtextxy(340,200,"3");
 setcolor(0);
 line(200,200,x,y);   //hour
 line(200,200,x1,y1); //min
 if(i>0&&i<30)           //12-3-6
 {
   if(i<15)               //12-3
   {
   x1+=9;
   y1+=9;
   }
   else if(i==15) //3
   {x1=330,y1=200;}
   else                  //3-6
   {
    x1-=9,y1+=9;}
 }
 else                    //6-9-12
 {
   if(i==30)     //6
   {
    x1=200,y1=330;
   }
   else if(i>30&&i<45)
   {
   x1-=9,y1-=9;}
   else if(i==45)  //9
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