#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <sys/stat.h>
void *fun(void *p)
{
    int i;
    for(i=1;i<10;i++)
    {
        if(i==5)
        {
            pthread_exit(200);
            /*return，即返回值，作用相同*/
            //return 200;
        }
        printf("world,p=%d\n",p);
        sleep(1);
    }
}   
int main()
{
    pthread_t id;
    int a,i;
    pthread_create(&id,NULL,fun,123);
    for(i=1;i<10;i++)
    {
        printf("hello\n");
        sleep(1);
    }
    pthread_join(id,&a);
    printf("a=%d\n",a);
    return 0;
}
