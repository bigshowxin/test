/*************************************************************************
	> File Name: sort_main.c
    > Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Wed 18 Jun 2014 02:47:34 PM CST
 ************************************************************************/
#include"sort.h"
int main(int argc,char* argv[])
{
	int i=0,list[10];//={10,9,8,7,6,5,4,3,2,110};
	for(i=0;i<10;i++)
	{
		scanf("%d",&list[i]);
	}
    bubble_sort(list,10);
	for(i=0;i<10;i++)
	{
		printf("%d ",list[i]);
	}
	printf("\n");
	return 0;
}

