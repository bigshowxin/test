/*************************************************************************
	> File Name: my_mkdir1.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 10:19:28 AM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char* argv[])
{	
	int ires;
	if(argc==1)
	{
		printf("too few arg");
	}else
	{
		ires=mkdir(argv[1],0777);
	}
	if(ires!=0)
	{
		printf("Wrong!");
	}
	return 0;
}
