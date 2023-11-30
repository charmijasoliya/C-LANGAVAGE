//wawr
#include<stdio.h>
int rev(int n)
{
	int rev=0,i;
	for(i=n;i!=0;i/=10)
	{
		rev=rev*10+i%10;
	}
	
	return rev;
}	
	int main()
	{
		int n;
		printf("enter a number to reverse:");
		scanf("%d",&n);
		printf("reverse= %d",rev(n));
		
		return 0;
	}