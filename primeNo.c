#include<stdio.h>
#include<conio.h>
int main  ()
{
    int n,i;
    printf  ("enter no to check it is prime no or not:- ");
    scanf  ("%d",&n);
    int flag=0;
    for ( i=2; i<n; i++)
    {
        if (n%i==0)
        {
            flag++;
        }
        if (flag==0)
        {
            printf ("%d is prime no.",n);
            break;
        }
        else
        {
            printf ("%d is not prime no.",n);
            break;
        }
    }
    if (n==2)
    {
        printf("%d is prime no.",n);
    }
    getch ();
}
