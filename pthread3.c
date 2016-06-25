#include <stdio.h>
#include <pthread.h>
int ticketcount=11;//
void *salewinds1(void *args)
{
    while(ticketcount >0)
    {
        printf("windows1 start sales!the ticket is:%d\n",ticketcount);
        sleep(2);
        ticketcount--;
        printf("sales ticket finish!the last ticket is:%d\n",ticketcount);
    }
}
void *salewinds2(void *args)
{
    while(ticketcount>0)
    {
        printf("windows2 start sales!the ticket is:%d\n",ticketcount);
        sleep(2);
        ticketcount--;
        printf("sales ticket finish!the last ticket is:%d\n",ticketcount);
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

