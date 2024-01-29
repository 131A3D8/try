//实现公式Π的近似值直到某一项绝对值小于阈值(阈值为10的-6次)
//Π/4约等于1-1/3+1/5-1/7+·····
#include<stdio.h>
#include<math.h>
void main()
{   
    double pai=0,z=1;
    int i=1,a=1;
    while(fabs(z)>=1e-6)
    {
        pai+=z;
        a+=2;
        i=-i;
        z=1.0*i/a;
    }
    printf("Π约为%lf",4*pai);
}