#include<stdio.h>
int main()
{
	int a,c=0,n;
	
	printf("enter the value=");
	scanf("%d",&n);
	do{
		if(n%2==0)
		{
			c=1;
		}
		a++;
	}while(a<n);
	if(c==0)
	{
		printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	return 0;
}



