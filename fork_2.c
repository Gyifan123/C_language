#include <stdio.h>
#include<unistd.h>
int main()
{
    int m=100;
    printf("aaaa\n");
    int n=fork();
    if(n>0)
    {
        m++;
        printf("bbbb n=%d m=%d\n",n,m);
    }
    else
    {
        sleep(2);
        printf("bbbb n=%d m=%d\n",n,m);
    }
    return 0;
}
