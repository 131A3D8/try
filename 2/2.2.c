//�ж�һ�����Ƿ�Ϊ����
#include<stdio.h>
main()
{
    int num,i;
    scanf("%d",&num);
    for ( i = 2; i < num; i++)
    {
        if(num%i==0)
        break;
    }
    if(num==i)
    printf("%d������\n",num);
    else
    printf("no,it is not.");
}