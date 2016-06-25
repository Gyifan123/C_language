#include <stdio.h>
#include <pthread.h>
int ticketcount=11;//
pthread_mutex_t lock;
void *salewinds1(void *args)
{
    while(1)
    {
        pthread_mutex_lock(&lock);
        if(ticketcount >0)
        {
            printf("windows1 start sales!the ticket is:%d\n",ticketcount);
            sleep(2);
            ticketcount--;
            printf("sales ticket finish!the last ticket is:%d\n",ticketcount);
        }
        else
        {
            pthread_mutex_unlock(&lock);
            pthread_exit(NULL);
        }
        pthread_mutex_unlock(&lock);
        sleep(1);
    }
}
void *salewinds2(void *args)
{
    while(1)
    {
        pthread_mutex_lock(&lock);
        if(ticketcount>0)
        {
            printf("windows2 start sales!the ticket is:%d\n",ticketcount);
            sleep(2);
            ticketcount--;
            printf("sales ticket finish!the last ticket is:%d\n",ticketcount);
        }
        else
        {
           pthread_mutex_unlock(&lock);
           pthread_exit(NULL);
        }
        pthread_mutex_unlock(&lock);
        sleep(1);
    }

}
int main()
{
    pthread_t pthid1=0;
    pthread_t pthid2=0;
    pthread_create(&pthid1,NULL,salewinds1,NULL);
    pthread_create(&pthid2,NULL,salewinds2,NULL);
    pthread_join(pthid1,NULL);
    pthread_join(pthid2,NULL);
    return 0;
}

