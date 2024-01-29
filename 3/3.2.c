//逆序存放后输出
/* #include<stdio.h>
#define N 10
int main()
{
    int arr[N],i,t;
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<N/2;i++)
    {
        t=arr[N-i-1];
        arr[N-i-1]=arr[i];
        arr[i]=t;
    }
    for(i=0;i<N;i++)
    printf("%d ",arr[i]);
    return 0;
} */
//函数写法
#include<stdio.h>
#define N 10
void fun(int arr[N]);
int main()
{
    int arr[N],i;
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    fun(arr);
     for(i=0;i<N;i++)
    printf("%d ",arr[i]);
    return 0;
}
/* void fun(int arr[N])
{
    int i,t;
    for(i=0;i<N/2;i++)
    {
        t=arr[N-i-1];
        arr[N-i-1]=arr[i];
        arr[i]=t;
    }
} */
void fun(int *q)
{
    int i,t;
    for(i=0;i<N/2;i++)
    {
        t=q[N-i-1];
        q[N-i-1]=q[i];
        q[i]=t;
    }
}
