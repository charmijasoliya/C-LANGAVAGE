/*#include<stdio.h>
void value()
{
	int a,b;
	
	printf("enter a=");
	scanf("%d",&a);
	
	printf("enter b=");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("%d is smallest",a);
		
	}else
	{
		printf("%d is smallest",b);
	}
} 
int main()
{
	value();
	
	
	return 0;	
}
*/


//wanr



#include<stdio.h>
int largeno(int x, int y)
{
	printf("%d is largest no:",x>y?x:y);
	
}
int main()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	largeno(a,b);
}
