#include "stdio.h"
void main()
{
	int a=1;
	int * pointer1;
	pointer1=&a;
	printf("a=%d\n",*pointer1);
}

