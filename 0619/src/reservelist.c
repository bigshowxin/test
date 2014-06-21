/*************************************************************************
	> File Name: reservelist.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Thu 19 Jun 2014 09:28:55 AM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
typedef struct tagNode
{
	int pnum;
	struct tagNode *pnext;
}NODE,*pNODE;

int main()
{
	//init linkedlist
	pNODE Head=(pNODE)calloc(1,sizeof(NODE));
	pNODE Tail=Head;
	pNODE Temp;
	pNODE Two;
	int i;
	for(i=0;i<8;i++)
	{
		if(i==0)
		{
			Head->pnum=i+1;
		}
		else
		{
			pNODE cur=(pNODE)calloc(1,sizeof(NODE));
			cur->pnum=i+1;
			Tail->pnext=cur;
			cur->pnext=NULL;
			Tail=cur;
		}
	}
	//output linkedlist
    while(Head!=NULL)
	{
		printf("%d ",Head->pnum);
		Head=Head->pnext;
	}
	//reserve linkedlist
	for(i=0;i<8;i++)
	{
		Temp=Head->pnext;
		if(i==0)
		{
			Head->pnext=NULL;
		}
	    Two = Temp->pnext;
		Temp->pnext=Head;
		Head=Temp;
		Temp=Two;
	}
	//output linkedlist
	 while(Head!=NULL)
	{
		printf("%d ",Head->pnum);
		Head=Head->pnext;
	}
	return 0;
}
