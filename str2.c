#include<stdio.h>
#include<string.h>
int main()
{
	char a[7]="charmi";
	int i,j,len;
		
		len=strlen(a);
		
	
	for(i=len;i>=0;i--)
	{
		printf("%c",a[i]);
	}	
	// printf("%s",a);
	// {
		// printf("string size of array =%s",strlen(a));	
	// }
	return 0;
}