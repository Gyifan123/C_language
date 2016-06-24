#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
	printf("fujinchengde_id:%d\n",getpid());
	int pid_tn=fork();
	if(pid_tn==0)
	{
		printf("zijicheng_id:%d ppid:%d \n",getpid(),getppid());
	}
	else
	{
		printf("chuangjian_zi_success,zijincheng_id:%d\n",pid_tn);
	}
	return 0;
}
