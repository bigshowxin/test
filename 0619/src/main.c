/*************************************************************************
	> File Name: main.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Thu 19 Jun 2014 09:18:16 AM CST
 ************************************************************************/

#include"sort.h"
int main()
{
	int i;
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	
	}
	bubble_sort(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
