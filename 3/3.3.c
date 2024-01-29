//求10个数的最大值以及第二大值
/* #include<stdio.h>
#define N 10
int main()
{
    int arr[N],i,max,max1,t=1;
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    max=0;
    for(i=0;i<N;i++)
    {
        if(arr[i]>arr[max])
        arr[max]=arr[i];
    }
    for(i=0;i<N;i++)
    if(i!=max&&t==1)
    {
        max1=i;
        t=0;
    }
    for(i=0;i<N;i++)
    if(arr[i]>arr[max1]&&arr[i]!=arr[max])
    max1=i;
    printf("最大值%d 第二大值%d",arr[max],arr[max1]);
    return 0;
} */
#include<stdio.h>
#define N 10
int max,max1;
void fun(int *a)
{   int i,t=1; 
    max=0;
    for(i=0;i<N;i++)
    {
        if(a[i]>a[max])
        a[max]=a[i];
    }
    for(i=0;i<N;i++)
    if(i!=max&&t==1)
    {
        max1=i;
        t=0;
    }
    for(i=0;i<N;i++)
    if(a[i]>a[max1]&&a[i]!=a[max])
    max1=i;
}
int main()
{
    int arr[N],i,t=1;
    for(i=0;i<N;i++)
    scanf("%d",&arr[i]);
    fun(arr);
    printf("最大值%d 第二大值%d",arr[max],arr[max1]);
    return 0;
}
