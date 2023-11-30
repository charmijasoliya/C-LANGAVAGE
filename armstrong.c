#include<stdio.h>
#include<math.h>
int main()
{
 	int i=1,j,a,b,n;
	float c=0;
	printf("enter the value:");
	scanf("%d",&n);
	b=n;
	do
	{   
		n=n/10;
		i++;
	}while(n>0);
	n=b;
	j=1;
	do{
		a=n%10;
		c=c+pow(a,i-1);
		n=n/10;
		j++;
	}while(j<=i);
	if(b==c)
	{
		printf("%d is armstrong number",b);
	}
	else
	{
		printf("%d is not armstrong number",b);
	}
	return 0;
}