/*************************************************************************
	> File Name: my_ls.c
	> Author: luoxin
	> Mail:17250308@qq.com 
	> Created Time: Fri 20 Jun 2014 02:27:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>
#include<grp.h>
#include<pwd.h>
#include<time.h>
int main(int argc,char* argv[])
{
	DIR* dir;
	struct dirent *p;
	struct stat mystat;
	char str[11];
	char *time;
	void mode_to_str(mode_t md,char *str);
	void format(char *str);
	if(argc==1)
	{
		dir=opendir("./");
		chdir(".");
	}
	else
	{
		dir=opendir(argv[1]);
		chdir(argv[1]);
	}
	if(dir==NULL)
	{
		printf("open fail!\n");
	}
	printf("mode\t\tnlink\tuid\tgid\ttime\t\tsize\tname\n");
	while((p=readdir(dir))!=NULL)
	{
		if(strncmp(p->d_name,".",1)==0||strncmp(p->d_name,"..",2)==0)
		{
			continue;
		}
		stat(p->d_name,&mystat);
		mode_to_str(mystat.st_mode,str);
		time_t t=mystat.st_atime;
		time=ctime(&t);
		format(time);
		printf("%s\t%d\t%s\t%s\t%s\t%d\t%s\n",str,mystat.st_nlink,getpwuid(mystat.st_uid)->pw_name,getgrgid(mystat.st_gid)->gr_name,time+4,mystat.st_size,p->d_name);
	}
	printf("\n");
	return 0;
}
void format(char *str)
{
	while(*str)
	{
		str++;
	}
	while((*str)!=':')
	{
		str--;
	}
	(*str)='\0';
}
void mode_to_str(mode_t md,char *str)
{
	strcpy(str,"----------");
	if(S_ISREG(md))
	{
		str[0]='-';
	}
	if(S_ISDIR(md))
	{
		str[0]='d';
	}
	if(S_ISLNK(md))
	{
		str[0]='l';
	}
	if(md&S_IRUSR)
	{
		str[1]='r';
	}
	if(md&S_IWUSR)
	{
		str[2]='w';
	}
	if(md&S_IXUSR)
	{
		str[3]='x';
	}
	if(md&S_IRGRP)
	{
		str[4]='r';
	}
	if(md&S_IWGRP)
	{
		str[5]='w';
	}
	if(md&S_IXGRP)
	{
		str[6]='x';
	}
	if(md&S_IROTH)
	{
		str[7]='r';
	}
	if(md&S_IWOTH)
	{
		str[8]='w';
	}
	if(md&S_IXOTH)
	{
		str[9]='x';
	}
}
