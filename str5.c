#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],newname[10];
	
	int i,len,j=0;
	printf("enter name=");
	scanf("%s",&name);
	
	len=strlen(name);
	printf("%d \n",len);
	for(i=0;i<len/2;i++)
	{
		
		newname[j++]=name[i];
		newname[j++]=name[(len-1)-i];
	}
	if(len%2!=0)
	{
		
		newname[j++]=name[len/2];
		
		
	}
	newname[j]='\0';
	
	printf("%s",newname);
	
	
		return 0;
}


