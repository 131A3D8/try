// 判断几位数    
//vscode中alt+shift+A是快速注释
/* #include<stdio.h>
main()
{
    int num,t=0,n;
    scanf("%d",&num);
    n=num;
    while (num!=0)
    {
        num=num/10;
        t++;
    }
    printf("%d是%d位数",n,t);
    
} */
//函数写法
#include<stdio.h>
main()
{
    int num,n;
    scanf("%d",&num);
    n=num;
    printf("%d是%d位数",n,fun(num));
    
}
int fun(int num)
{
    int t=0;
    while (num!=0)
    {
        num=num/10;
        t++;
    }
    return t;
}