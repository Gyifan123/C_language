/*创建无名管道
*
*
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main()
{
	int fds[2]={0};
	pipe(fds);
	char buf[32];
	if(fork()==0)
	{
		sleep(2);
		read(fds[0],buf,sizeof(buf));
		puts(buf);
		close(fds[0]);
		close(fds[1]);
	}
	else
	{
		write(fds[1],"hello",6);
		waitpid(-1,NULL,0);
		close(fds[0]);
		close(fds[1]);
	}
	return 0;
}
