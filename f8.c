//wawr

#include<stdio.h>
int product(int x, int y)
{
	return x*y;
	
}
int main()
{
	int a,b,m;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	
	//m=product(a,b);
	//printf("product of a and b is:%d",m);
	
	printf("product of a and b is:%d",product(a,b));
	//largestno(100,50);	
}