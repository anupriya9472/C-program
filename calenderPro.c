#include<stdio.h>
#include<conio.h>
long yeard(int a)
{
    int i=0;
    long td=0;
    for(i=1; i<a; i++)
    {
        if(i%100==0&&i%400==0||i%100!=0&&i%4==0)
        {
            td+=366;
        }
        else
        {
            td+=365;
        }
    }
    return (td);
}

int monthd(int b,int c)
{
    int i=0;
    int td=0;
    for(i=1; i<b; i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
        {
            td+=31;
        }
        else if(i==4||i==6||i==9||i==11)
        {
            td+=30;
        }
        else if(i==2&&c%100==0&&c%400==0||i==2&&c%100!=0&&c%4==0)
        {
            td+=29;
        }
        else
        {
            td+=28;
        }
    }
    return (td);
}
int day(int m,int y)
{
    int d=0;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        d=31;
    }
    else if(m==4||m==6||m==9||m==11)
    {
        d=30;
    }
    else if(m==2&&y%100==0&&y%400==0||m==2&&y%100!=0&&y%4==0)
    {
        d=29;
    }
    else
    {
        d=28;
    }
    return (d);
}
void calen(int m,int y)
{
    int td,cdw=0,h,i=0,b=1;
    long total=0;
    total=yeard(y);
    total+=monthd(m,y);
    td=day(m,y);
    cdw=total%7;
    printf("\n\tM\tT\tW\tT\tF\tS\tS\n\n");
    for(i=0; i<=cdw; i++)
    {
        printf(" \t");
    }
    h=7-cdw;
    for(i=1; i<=h; i++)
    {
        printf("%d\t",i);
    }
    printf("\n\n");
    for(i=h+1; i<=td; i++)
    {
        if(b==8)
        {
            printf("\n\n");
            b=1;
        }
        printf("\t%d",i);
        b++;
    }
}
int main()
{
    int y,m;
    printf("enter year:-");
    scanf("%d",&y);
    printf("enter month:-");
    scanf("%d",&m);
    if(m>12||m<1||y<1)
    {
        printf("This month or year is invalid");
    }
    else
    {
        calen(m,y);
    }
    return 0;
}
