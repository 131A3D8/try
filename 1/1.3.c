//�ж�һ����λ���Ƿ�Ϊˮ�ɻ���
#include<stdio.h>
main()
{
    int num,a,b,c;
    scanf("%d",&num);
    a=num/100;
    b=num/10%10;
    c=num%10;
    if (a*a*a+b*b*b+c*c*c==num)
    {
       printf("��ˮ�ɻ���");
    }
    else
    printf("����ˮ�ɻ���");
}