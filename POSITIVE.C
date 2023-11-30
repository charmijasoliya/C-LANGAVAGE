#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	scanf("%d",&a);

	if(a>0)
	{
		printf("a is positive");
	}else if(a<0)
	{
		printf("a is negative");

	}else if(a==0)
	{
		printf("a is zero");
	}

	getch();
	return 0;
}