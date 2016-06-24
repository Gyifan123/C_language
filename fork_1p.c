#include<stdio.h>
#include<unistd.h>
int main()
{
    int f1_ppid,f1_pid,z1_ppid,z1_pid,f2_ppid,f2_pid,z2_ppid,z2_pid,n,p;
    if((n=fork())>0)
    {   
        printf("1_fu\n");
	f1_ppid=getppid();
	f1_pid=getppid();   
        printf("ppid=%d,pid=%d\n",f1_ppid,f1_pid);
    }
    else if(n==0)
    {
        printf("1_zi\n");
	z1_ppid=getppid();
	z1_pid=getpid();
        printf("ppid=%d,pid=%d\n",z1_ppid,z1_pid);
	 if(p=fork()>0)
        {
	    f2_ppid=getppid();
	    f2_pid=getpid();
            printf("2_fu");
            printf("ppid=%d,pid=%d\n",f2_ppid,f2_pid);
        }
	 else if(p==0)
	{
	    z2_ppid=getppid();
	    z2_pid=getpid();
	    printf("p_zi");
	    printf("ppid=%d,pid=%d\n",z2_ppid,z2_pid);
	}
    }
	printf("Hello World\n");
	return 0;
}
