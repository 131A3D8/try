//求两个数的最大公约数，最小公倍数
/* #include<stdio.h>
main()
{
  int a,b,c,d;
  scanf("%d%d",&a,&b);
  c=a*b;
  d=a%b;
  while (d>0)
  {
    a=b;
    b=d;
    d=a%b;
  }
  printf("最大公约数%d，最小公倍数%d",b,c/b);
} */
//函数写法
#include<stdio.h>
main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("最大公约数%d，最小公倍数%d",fun(a,b),fun1(a,b));
}
int fun(int a,int b)
{
  int d;
  d=a%b;
  while (d>0)
  {
    a=b;
    b=d;
    d=a%b;
  }
  return b;
}
int fun1(int a,int b)
{
  int c;
  c=a*b;
  return c/fun(a,b);
}
