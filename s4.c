//输出二维数组的有关数据（地址和值）
#include <stdio.h>

int main()
{
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    printf("%d,%d\n",a,*a);
    printf("%d,%d\n",a[0],*(a+0));
    printf("%d,%d\n",&a[0],&a[0][0]);
    printf("%d,%d\n",a[1],a+1);
    printf("%d,%d\n",&a[1][0],*(a+1)+0);
    printf("%d,%d\n",a[1][0],*(*(a+1)+0));
    return 0;
}
