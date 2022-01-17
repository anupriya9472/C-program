#include<stdio.h>
#include<conio.h>
int main ()
{
    char ar [20];
    int v=0,sv=0,co=0,i=0,s=0,j=0;
    printf ("enter string:- ");
    gets (ar);
    for (i=0; i <20; i++)
    {
        if (ar [i]!='\0')
        {
            if (ar [i]=='a'||ar [i]=='e'||ar [i]=='i'||ar [i]=='o'||ar [i]=='u'||ar [i]=='A'||ar [i]=='E'||ar [i]=='I'||ar [i]=='O'||ar [i]=='U')
            {
                v++;
            }
            else if (ar [i]==' ')
            {
                s++;
            }
            else if (ar [i]=='y'||ar [i]=='z'||ar [i]=='Y'||ar [i]=='Z')
            {
                sv++;
            }
            else
            {
                co++;
            }
        }
    }
    printf ("total no of vowel=%d\ntotal no of semi vowel=%d\n",v,sv);
    printf ("total no of constant=%d\ntotal no of space=%d",co,s);
    return 0;
}
