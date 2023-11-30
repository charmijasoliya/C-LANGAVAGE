#include<stdio.h>
void nagative()
{
	int a;
	
	printf("enter a=");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("a is positive=");
		
	}
	if(a<1)
	{
		printf("a is nagative=");
	}
	if(a==0)
	{
		printf("a is zero=");
		
	}
} 
int main()
{
	nagative();
	
	
	return 0;	
}