/*************************************************************************
	> File Name: my_pwd1.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 10:04:52 AM CST
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
int main(int argc,char* argv[])
{
	printf("current dir: %s\n",getcwd(NULL,0));
	return 0;
}
