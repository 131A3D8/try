//斐波那契数列
/* #include<stdio.h>
main()
{
    int f1,f2,fn,n,i;
    printf("斐波那契数列前n项");
    scanf("%d",&n);
    f1=f2=1;
    printf("%d %d ",f1,f2);
    for ( i = 0; i <n-2; i++)
    {
       fn=f1;
       f1=f2;
       f2=fn+f1;
       printf("%d ",f2);
    }
} */
#include<stdio.h>
void fun(int n);
main()
{
    int n;
    printf("斐波那契数列前n项");
    scanf("%d",&n);
    fun(n);
}
void fun(int n)
{
    int f1,f2,fn,i;
    f1=f2=1;
    printf("%d %d ",f1,f2);
    for ( i = 0; i <n-2; i++)
    {
       fn=f1;
       f1=f2;
       f2=fn+f1;
       printf("%d ",f2);
    }
}