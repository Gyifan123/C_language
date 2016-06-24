/*一个关于信号量的直观易懂的程序
*
*
*/
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/sem.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<string.h>
union semun
{
	int val;
	struct semid_ds*buf;
	unsigned short*array;
};
int main()
{
	int i;
	int key=ftok("b.dat",1);
	int id=semget(key,4,IPC_CREAT);
	unsigned short sz0[4],sz1[4]={10,20,30,40};
	union semun arg;
	arg.array=sz1;
	semctl(id,0,SETALL,arg);
	struct sembuf aaa[2]={{0,10,0},{2,-5,0}};
	semop(id,aaa,2);
	arg.array=sz0;
	semctl(id,0,GETALL,arg);
	for(i=0;i<4;i++)
	{
		printf("%d:%d\n",i,sz0[i]);
	}
		semctl(id,IPC_RMID,0);
	return 0;
}
