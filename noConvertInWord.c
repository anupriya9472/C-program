#include<stdio.h>
#include<conio.h>
void wordprint(long);
int digit(long);
void conw(int);
int main()
{
    long n;
    printf("Enter any integer number 0 to 200000000 to convert in word:-");
    scanf("%ld",&n);
    if(n<0||n>200000000)
    {
        printf("\nNumber is invalid");
    }
    else
    {
        wordprint(n);
    }
    return 0;
}
void wordprint(long n)
{
    int i,hu=100,th=1000,di;
    long no,la=100000,cr=10000000;
    if(n==0)
    {
        printf("zero");
    }
    else
    {
        di=digit(n);
        if(di==9||di==8)
        {
            no=n;
            if(di==9)
            {
                for(i=1; i<di-1; i++)
                {
                    no/=10;
                }
            }
            if(di==8)
            {
                for(i=1; i<di; i++)
                {
                    no/=10;
                }
            }
            conw(no);
            printf(" crore");
            for(i=1; i<100; i++)
            {
                if(no==i)
                {
                    n=n-cr;
                }
                cr+=10000000;
            }
        }
        di=digit(n);
        if(di==7||di==6)
        {
            no=n;
            if(di==7)
            {
                for(i=1; i<di-1; i++)
                {
                    no/=10;
                }
            }
            if(di==6)
            {
                for(i=1; i<di; i++)
                {
                    no/=10;
                }
            }
            conw(no);
            printf(" lakh");
            for(i=1; i<100; i++)
            {
                if(no==i)
                {
                    n=n-la;
                }
                la+=100000;
            }
        }
        di=digit(n);
        if(di==5||di==4)
        {
            no=n;
            if(di==5)
            {
                for(i=1; i<di-1; i++)
                {
                    no/=10;
                }
            }
            if(di==4)
            {
                for(i=1; i<di; i++)
                {
                    no/=10;
                }
            }
            conw(no);
            printf(" thousand");
            for(i=1; i<100; i++)
            {
                if(no==i)
                {
                    n=n-th;
                }
                th+=1000;
            }
        }
        di=digit(n);
        if(di==3)
        {
            no=n;
            for(i=1; i<di; i++)
            {
                no/=10;
            }
            conw(no);
            printf(" hundred");
            for(i=1; i<10; i++)
            {
                if(no==i)
                {
                    n-=hu;
                }
                hu+=100;
            }
        }
        di=digit(n);
        if(di==1||di==2)
        {
            conw(n);
        }
    }
}
void conw(int n)
{
    int i,l=0,d1,d2,di;
    char a[20][10]= {{"one"},{"two"},{"three"},{"four"},{"five"},{"six"},{"seven"},{"eight"},{"nine"},{"ten"},{"eleven"},{"twelve"},{"thirteen"},{"fourteen"},{"fifteen"},{"sixteen"},{"seventeen"},{"eighteen"},{"nineteen"}};
    char b[9][10]= {{"twenty"},{"thirty"},{"forty"},{"fifty"},{"sixty"},{"seventy"},{"eighty"},{"ninety"}};
    di=digit(n);
    if(n>9)
    {
        for(i=9; i<19; i++)
        {
            if(n-1==i)
            {
                printf(" %s",a[i]);
                l++;
            }
        }
    }
    else
    {
        for(i=0; i<10; i++)
        {
            if(n-1==i)
            {
                printf(" %s",a[i]);
            }
        }
    }
    di=digit(n);
    if(l==0)
    {
        if(di==2)
        {
            d1=n/10;
            for(i=0; i<10; i++)
            {
                if(d1-2==i)
                {
                    printf(" %s",b[i]);
                }
            }
            d2=n%10;
            for(i=0; i<10; i++)
            {
                if(d2-1==i)
                    printf(" %s",a[i]);
            }
        }
    }
}
int digit(long no)
{
    int di=0;
    long i;
    for(i=no; i>0; i/=10)
    {
        di++;
    }
    return di;
}
