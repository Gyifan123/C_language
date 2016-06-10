/*获得文件的大小
 *并判断类型
 *改过加入O_CREAT
 */ 
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<time.h>
int main()
{
    int fd =open("./a.txt",O_RDONLY);
    if(fd==-1)
    {
        perror("open error");
        exit(-1);
    }
    struct stat buf;
    int iret=fstat(fd,&buf);
    if(iret==-1)
    {
        perror("fstat error");
        exit(-1);
    }
    if(S_ISREG(buf.st_mode))
    {
        printf("rugular file!\n");
    }
    if(S_ISDIR(buf.st_mode))
    {
        printf("directory!\n");
    }
    if(S_ISLNK(buf.st_mode))
    {
        printf("link file!\n");
    }
    printf("the size of file is :%d\n",(int)buf.st_size);
    close(fd);
    return 0;
}
