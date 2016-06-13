#include<unistd.h>
#include<stdio.h>
extern char **environ;
int main(int argc, char* argv[])
{
    puts("此信息可能无法输出");
    execve("beexec",argv,environ);
    puts("正常情况下此信息无法输出");
}
