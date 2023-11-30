#include<stdio.h>
int main()
{
	int a=5,b,c;
	do
	{
		b=1;
		do
		{
			printf(" ");
			b++;
		}
		while(b<=5-a);
		printf("\n");
		a--;
	}while(a>=1);
	
	
	c=1;
	do
	{
			printf("*");
			c++;
	}
	while(c<=a);
	
	
return 0;

}