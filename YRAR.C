#include<stdio.h>
#include<conio.h>
int main()
{

	int day;
	int year,month,days,week;

	int y=365;
	int m=30;
	int w=7;
	clrscr();

	printf("enter a days:");
	scanf("%d",&day);

	year =day/y;
	day =day%y;
	month =day/m;
	day  =day%m;
	week =day/w;
	days =day%w ;

	printf("%d year %d month %d week %d days",year, month ,week ,days);

	getch();
	return 0;


}