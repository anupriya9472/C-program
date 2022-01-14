#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
int gd=0,gm;
clrscr();
initgraph(&gd,&gm,"");
rectangle(100,150,300,400);
rectangle(300,170,400,400);

//rectangle(300,80,400,400);
//line(300,170,400,170);

line(300,190,425,190);
line(400,170,425,190);

line(200,70,67,180);
line(200,70,350,180);
//line(67,180,350,180);
line(100,275,325,275);
line(300,290,400,290);
//line(300,310,425,310);
//line(400,290,425,310);
//line(325,275,350,300);
line(325,275,325,260);
line(300,260,325,260);
setfillstyle(7,7);
bar(125,200,175,250); //w1
bar(230,200,280,250); //w2
bar(125,330,175,380); //w3
bar(230,330,280,380); //w4
bar(330,215,380,265); //w5
getch();
return 0;
}
