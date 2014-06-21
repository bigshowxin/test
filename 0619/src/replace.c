/*************************************************************************
	> File Name: replace.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Thu 19 Jun 2014 10:28:08 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={1,2,3,4,5};
	char b[10]="";
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		 b[i]=a[i]+48;
	}
	 b[i]='\0';
    printf("%s",b);
	printf("\n");
	return 0;
}
