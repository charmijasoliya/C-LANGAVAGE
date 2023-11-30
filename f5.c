#include<stdio.h>
void div()
{
	int a;
	
	printf("enter a=");
	scanf("%d",&a);
	
	if(a%5==0)
	{
		printf("a is  divisible by 5 and 3");
		
	}else
	{
		printf("a is not divisible by 5 and 3");
	}
} 
int main()
{
	div();
	
	
	return 0;	
}


