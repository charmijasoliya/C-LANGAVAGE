#include<stdio.h>
void pass()
{
	int a;
	
	printf("enter a=");
	scanf("%d",&a);
	
	if(a>33)
	{
		printf("pass");
		
	}else
	{
		printf("fail");
	}
} 
int main()
{
	pass();
	
	
	return 0;	
}