#include<stdio.h>
#include<unistd.h>
int main()
{
    int n;
	if((n=fork())>0)
    {   
        printf("fujicheng");   
        printf("pid=%d		,   	ppid=%d\n",getppid(),getpid());
       
    }
    else if(n==0)
    {
        printf("zijincheng");
        printf("pid=%d       ,       ppid=%d\n",getppid(),getpid());
    }
    else
    {
        printf("error!");
    }    
	printf("Hello World\n");
	return 0;
}
