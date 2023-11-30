//wawr

#include<stdio.h>
int perfect(int num)
{
	int i,sum=0;
	for(i=1;i<=num;i++)
	{
		if(num%1==0)
		{
			sum+=i;
			
		}
	}
	if(sum==num && num>0)
	{
		return 1;
		
	}else
	{
		return 0;
	}
}
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(perfect(num))
	{
		printf("%d is perfect number:",num);
		
		
	}else
	{
		printf("%d is not perfect number:",num);
	}
	return 0;
} 

