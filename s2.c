#include "stdio.h"
void main()
{
	int a[4];
	int i,*p;
	printf("please enter 4 integer nembers:\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("look *(a+i)!\n");
	for(i=0;i<4;i++)
	{
		printf("%d\n",*(a+i));
	}
	printf("look *p!\n");
	for(p=a;p<(a+4);p++)
	{
		printf("%d\n",*p);
	}
}
