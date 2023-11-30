#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	clrscr();
	for(a=2;a<=10;a+=2)
	{
		for(b=1;b<=5;b++)
		{
		printf("%d\t" ,a);
		}
		printf("\n");
	}
	getch();
	return 0;
}