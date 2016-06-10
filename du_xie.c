/*
 *本程序基于书上75页非缓冲的操作
 *功能：
 *打开一个文件，若打开失败则创建；
 *打开成功则读6个字符
 *并打出hello字符
 */
#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
    int fd;
    char buf[32]={0};
    
    if(( fd=open("xx.text",O_RDWR))==-1)
    {
        fd=creat("xx.text",0755);
        printf("打开失败,创建！");
    }
    else
    {    
        read(fd,buf,6);
        printf("%s\n",buf);
        strcpy(buf,"hello\n");
        write(fd,buf,6);
        close(fd);
    }
    return 0;
}

