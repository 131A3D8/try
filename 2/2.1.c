//求1！+2！+3！+·····+n！
#include<stdio.h>
main()
{
    int n,i,j=1,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j*=i;
        sum=sum+j;
    }
    printf("%d",sum);
}
