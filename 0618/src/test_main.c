/*************************************************************************
	> File Name: test_main.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Wed 18 Jun 2014 05:13:48 PM CST
 ************************************************************************/

#include"sort.h"
int main()
{
	int a[10]={10,8,5,6,7,3,4,2,1,9};
	int i;
	bubble_sort(a,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

