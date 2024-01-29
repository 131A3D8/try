/* #include<stdio.h>
main()
{
    int n,t,i,m=0,a;
    scanf("%d",&n);
    printf("项个");
    scanf("%d",&a);
    m=t=a;
    for(i=1;i<n;i++)//循环一遍a*10+a
    {     
        m=m*10+a;
        t+=m;
    }
    printf("%d",t);
} */
//函数写法
#include<stdio.h>
int fun(int n,int a);//没有用，没他也行，就是为了解决波浪线错误标注不好看加上的
main()
{   
    int n,a;
    scanf("%d",&n);
    printf("项个");
    scanf("%d",&a);
    printf("%d",fun(n,a));
}
int fun(int n,int a)
{
    int t,i,m=0;
    m=t=a;
    for(i=1;i<n;i++)
    {     
        m=m*10+a;
        t+=m;
    }
    return t;
}