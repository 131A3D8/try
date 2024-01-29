//求出所有水仙花数并存入数组
#include<stdio.h>
main()
{
    int arr[100],i,a,b,c,t=0;
    for(i=100;i<1000;i++)
    {
        a=i/100;b=i/10%10;c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            arr[t]=i;
            t++;
        }
    }
    for(i=0;i<t;i++)
    printf("%d  ",arr[i]);
}