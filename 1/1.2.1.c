//输入三个整数，输出两个较小数的和
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
    printf("%d",a+b+c-max);
}