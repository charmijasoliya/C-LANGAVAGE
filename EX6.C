#include<stdio.h>
void positive()
{
	int a;
	
	printf("enter a=");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("a is positive");
		
	}
	if(a<1)
	{
		printf("a is nagative");
	}
	if(a==0)
	{
		printf("a is zero");
		
	}
} 
int main()
{
	positive();
	
	
	return 0;	
}