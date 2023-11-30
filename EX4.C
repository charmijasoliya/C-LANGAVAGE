#include<stdio.h>
#include<conio.h>
int main()
{
	int n,b=1,c,i;
	clrscr();
	printf("enter n:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	 {
	  c=i*b;
	 printf("%d\t",c);
	  b=b*2;
	}
	return 0;
	getch();
}