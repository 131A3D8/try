//有一个已排好序的数组，要求输入一个数后，按原来的排序规律将他插入数组中
//升序
/* #include<stdio.h>
#define N 10
main()
{
    int arr[N],i,n,t;
    for(i=0;i<N-1;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&n);
    for(i=0;i<N;i++)
    {
        if(arr[i]>n)
        {
            for(t=N-2;t-i;t--)
            arr[t+1]=arr[t];                
            break;
        }
    }
    arr[i]=n;
    for(i=0;i<N;i++)
    printf("%d ",arr[i]);
} */

//函数形式

#include<stdio.h>
#define N 10
void fun(int a[],int n);
main()
{
    int arr[N],i,n;
    for(i=0;i<N-1;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&n);
    fun(arr,n);
    for(i=0;i<N;i++)
    printf("%d ",arr[i]);
}
void fun(int a[],int n)
{
    int i,t;
    for(i=0;i<N;i++)
    {
        if(a[i]>n)
        {
            for(t=N-2;t-i;t--)
            a[t+1]=a[t];                
            break;
        }
    }
        a[i]=n;
}