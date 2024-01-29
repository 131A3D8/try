//求a+aa+aaa+·····+aa·····aaaa之和
/* #include<stdio.h>
main()
{
    int n,t,i,m=0;
    scanf("%d",&n);
    m=t=n;
    for(i=1;i<n;i++)//循环一遍a*10+a
    {     
        m=m*10+n;
        t+=m;
    }
    printf("%d",t);
} */
//函数写法
#include<stdio.h>
int fun(int n);//没有用，没他也行，就是为了解决波浪线错误标注不好看加上的
main()
{   
    int n;
    scanf("%d",&n);
    printf("%d",fun(n));
}
int fun(int n)
{
    int t,i,m=0;
    m=t=n;
    for(i=1;i<n;i++)
    {     
        m=m*10+n;
        t+=m;
    }
    return t;
}