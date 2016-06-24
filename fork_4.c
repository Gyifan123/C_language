#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
	char szbuf[32]={'\0'};
	int ifile=open("./a.txt",O_RDONLY|O_CREAT);
	if(fork()>0)//fu
	{
		close(ifile);
		return 0;
	}
	//zi
	sleep(3);
	read(ifile,szbuf,sizeof(szbuf)-1);
	printf("string:%s\n",szbuf);
	close(ifile);
	return 0;
}
