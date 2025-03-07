#include<stdio.h>

int main()
{
    int i,j,k,a,b,c,d;
    for(i=100;i<=1000;i++)
    {
      a=i*i;
        for(j=100;j<=1000;j++)
        {
            b=j*j;
            d=a+b;
         for(k=100;k<=1000;k++)
         {
             c=k*k;
             if(d==c)
             {
                 printf("%d^2+%d^2=%d^2\n",i,j,k);
             }
         }
        }
    }
    return 0;
}
