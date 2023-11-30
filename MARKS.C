#include<stdio.h>
#include<conio.h>
int main()
{
	int Ba,eco,ac,eng,maths,total;
	int grade, marks;
	clrscr();

	printf("\n enter the  marks:\n");
	scanf("%d%d%d%d%d",&Ba,&eco,&ac,&eng,&maths);

	total=Ba+eco+ac+eng+maths;
	total=(total/5)*100;

	printf("total=%d\n",total);
	printf("\nmarks=%d",marks);

	if(marks >=75)
	{
		printf("\n grade a");
	}
	else if(marks>60&&marks<75)
	{
		printf("\n grade b");
	}
	else if(marks>45&&marks<60)
	{
		printf("\n grade c");
	}
	else if(marks >35 && marks <45)
	{
		printf("\n grade d");
	}
	else if(marks<35)
	{
		printf("\n fail");
	}

	getch();
	return 0;
}