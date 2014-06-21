/*************************************************************************
	> File Name: my_cd1.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 10:10:47 AM CST
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
		iret=chdir(argv[1]);
	}
	if(iret!=0)
	{
		perror("Wrong!");
	}
	return 0;
}
