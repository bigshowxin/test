/*************************************************************************
	> File Name: bubble_sort.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Wed 18 Jun 2014 02:37:29 PM CST
 ************************************************************************/
#include"sort.h"
void bubble_sort(int *list,int len)
{
	int i,j,temp;
	for(i=0;i<len-1;i++)
	{
		for(j=0;j<len-i-1;j++)
		{
			if(list[j]>list[j+1])
			{
			   temp=list[j];
			   list[j]=list[j+1];
			   list[j+1]=temp;
			}
		}
	}
}
