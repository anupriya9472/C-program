#include<conio.h>
#include<stdio.h>
void main()
{
	int sum=0,i;
	//clrscr();
	printf("sum of all odd no between 1 to 100:-");
	for (i=1;i<=100;i++)
	{
		if (i%2!=0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	getch();
}
