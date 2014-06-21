/*************************************************************************
	> File Name: my_pwd.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 09:18:55 AM CST
 ************************************************************************/

#include<unistd.h>
#include<stdio.h>
int main(int argc,char* argv[])
{
	printf("current directory: %s",getcwd(NULL,0));
	return 0;
}

