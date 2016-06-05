/*面试题1
*补充if的条件，使得输出为helloworld
*/
#include<stdio.h>
int main()
{
	if(!(printf("hello")))
	{
		printf("hello");
	}
	else 
	{
		printf("world");
	}
	return 0;
}

