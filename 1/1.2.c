//求三个数的最大值
#include<stdio.h>
main()
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    printf("%d是最大值",max);
}