#include<stdio.h>
void main()
{
    FILE *fp;
    char a[500];
    fp=fopen("E:/file.txt","r");
    while(fscanf(fp,"%s",a)!= EOF)
    {
        printf("%s\n",a);
    }
    fclose(fp);
}