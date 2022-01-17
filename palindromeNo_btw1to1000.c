#include<stdio.h>
#include<conio.h>
int main()
{
	int no=0,rev,d=0;
	printf("program for palindrome no 1to1000\n");
	for (no=1;no <=1000;no++)
	{
		rev=0;
		for (int i=no;i>0;i/=10)
		{
			d=i%10;
			rev=rev*10+d;
		}
		if (no==rev)
			printf ("%d,",no);
	}
	return 0;
}
