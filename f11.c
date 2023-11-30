#include<stdio.h>
int convert(int a, int h, int f, int tv, int tn, int fi, int tw, int o)
{
	h=a/100;
	printf("%d\t",h);
	
	a=a%100;
	f=a/50;
	printf("%d\t",f);
	a=a%50;
	tv=a/20;
	printf("%d\t",tv);
	a=a%20;
	tn=a/10;
	printf("%d\t",tn);
	a=a%10;
	fi=a/5;
	
	printf("%d\t",fi);
	a=a%5;
	tw=a/2;
	
	printf("%d\t",tw);
	a=a%2;
	o=a/1;
	
	printf("%d\t",o);
}
int main()
{
	int a,h,f,tv,tn,fi,tw,o,ans;
	
	printf("enter an amount:");
	scanf("%d",&a);
	ans=convert(a,h,f,tv,tn,fi,tw,o);
	return 0;
}

