//�ж��Ƿ�ͬ����
//����5��5��ƽ��25��25�Ҳ������5�� 5��ͬ����
#include<stdio.h>
main()
{
    int x;
    scanf("%d",&x);
    if(x>0&&x<10)
    {
        if(x*x%10==x)
        printf("1");
        else
        printf("0");
    }
    if (x>9&&x<100)
    {
        if (x*x%100==x)
        printf("1");
        else
        printf("0");
        
    }
}