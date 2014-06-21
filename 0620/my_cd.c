/*************************************************************************
	> File Name: my_cd.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 09:24:46 AM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main(int argc,char* argv[])
{
	int iret;
	if(argc==1)
	{
		iret=chdir("~");
	}
	else
	{
		iret=chadir(argv[1]);
	}
	if(iret!=0)
	{
		perror("chdir fail:");
	}
		return 0;
}
