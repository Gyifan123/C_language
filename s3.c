#include<stdio.h>
int main()
{
	int *p,i,a[3];
	p=a;
	printf("please enter 3 numbers\n");
	for(i=0;i<3;i++,p++)
	{
		//scanf("%d\n",p);
		scanf("%d",p);
	}
	p=a;
	for(i=0;i<3;i++,p++)
	{
		printf("%d\n",*p);
	}
	return 0;	
}
