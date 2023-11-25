//求所有水仙花数
#include<stdio.h>
main()
{
    int num,a,b,c;
    for(num=100;num<1000;num++)
   { 
    a=num/100;
    b=num/10%10;
    c=num%10;
    if (a*a*a+b*b*b+c*c*c==num)
    {
       printf("%d ",num);
    }
    }
}
