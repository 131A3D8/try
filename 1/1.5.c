//判断是否同构数
//输入5，5的平方25，25右侧的数是5， 5是同构数
#include<stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x>0&&x<10)
    {
        if(x*x%10==x)
        printf("1");
        else
        printf("0");
    }
    if (x>9&&x<100)
    {
        if (x*x%100==x)
        printf("1");
        else
        printf("0");
        
    }
}