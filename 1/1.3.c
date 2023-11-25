//判断一个三位数是否为水仙花数
#include<stdio.h>
main()
{
    int num,a,b,c;
    scanf("%d",&num);
    a=num/100;
    b=num/10%10;
    c=num%10;
    if (a*a*a+b*b*b+c*c*c==num)
    {
       printf("是水仙花数");
    }
    else
    printf("不是水仙花数");
}