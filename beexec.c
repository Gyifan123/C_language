#include<stdio.h>
#include<unistd.h>
extern char **environ;
int main(int argc,char *argv[])
{
    int i;
    puts("输出执行参数：");
    for(i=0;i<=argc;i++)
    {
        printf("参数%d是：%s\n",i,argv[i]);
    }
}
