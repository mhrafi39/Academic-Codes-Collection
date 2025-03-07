#include <stdio.h>

int main()
{
    int i,j,fact,a,sum,b,k;
    for(j=1; j<=1000000; j++)
    {
        b=j;
        sum=0;
        k=j;
        while(k!=0)
        {
            a=k%10;
            fact=1;
            for(i=1; i<=a; i++)
            {
                fact*=i;
            }
            sum+=fact;
            k/=10;

        }
        if(sum==b)
        {
            printf("%d\n",b);
        }


    }


    return 0;
}
