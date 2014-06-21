/*************************************************************************
	> File Name: deletelinkelement.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Thu 19 Jun 2014 10:39:52 AM CST
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
typedef struct tag
{
	int pnum;
	struct tag* pnext;
}NODE,*pNODE;
int main()
{
	pNODE list1=(pNODE)calloc(1,sizeof(NODE));
	pNODE list2=(pNODE)calloc(1,sizeof(NODE));
	pNODE Tail1;
	pNODE Tail2;
	pNODE Head1;
	pNODE Head2;
	pNODE pcur;
	int i;
	//init list1
	for(i=0;i<10;i++)
	{
		if(i==0)
		{
			list1->pnum=i+1;
			Tail1=list1;
		}
		else
		{	pNODE cur1=(pNODE)calloc(1,sizeof(NODE));
			cur1->pnum=i+1;
			Tail1->pnext=cur1;
			Tail1=cur1;
		}
	}
	//init list2
	Head1=list1;
	while(Head1!=NULL)
	{
		printf("%d ",Head1->pnum);
		Head1=Head1->pnext;
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		if(i==0)
		{
			list2->pnum=i+1;
			Tail2=list2;
		}
		else
		{
			pNODE cur2=(pNODE)calloc(1,sizeof(NODE));
			cur2->pnum=i+1;
			Tail2->pnext=cur2;
			Tail2=cur2;
		}
	}
	Head2=list2;
	while(Head2!=NULL)
	{
		printf("%d ",Head2->pnum);
		Head2=Head2->pnext;
	}
	printf("\n");

	//delete the same element 
	Head1=list1;
	Head2=list2;
	pcur=NULL;
	int flag=1;
	pNODE Temp;
	while(Head2!=NULL)
	{
		while(Head1!=NULL)
		{
			if(Head1->pnum==Head2->pnum)
			{
				if(pcur==NULL)
				{
					pNODE Temp=Head1;
					Head1=Head1->pnext;
					free(Temp);
				}
				else
				{
					pNODE Temp=Head1;
					pcur->pnext=Head1->pnext;
					Head1=Head1->pnext;
					free(Temp);
				}
			}
			else
			{
				pcur=Head1;
				Head1=Head1->pnext;
			}
		}
		Head2=Head2->pnext;
		Head1=list1;
	}
	//printf list1
	Head1=list1;
	while(Head1!=NULL)
	{
		printf("%d ",Head1->pnum);
		Head1=Head1->pnext;
	}
	printf("\n");
	return 0;
}
