/*************************************************************************
	> File Name: my_mkdir.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 09:38:29 AM CST
 ************************************************************************/

#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	int iret;
	if(argc==1)
	{
		printf("too few arg!\n");
		exit(-1);
	}else
	{
		iret=mkdir(argv[1],0777);//umask() 777 & ~umask
	}
	return 0;
}
