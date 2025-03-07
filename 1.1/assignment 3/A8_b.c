#include <stdio.h>

int main()
{

    int n=5,i,j,odd=1,even=2,r1=13,r2=8,r3=3,r4=2;

    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=(n-i)-1; j++)
        {
            printf(" ");

        }
        for(j=1; j<=2*i+1; j++)
        {
            if(i==4)
            {
                printf("%d",r1);
                r1+=2;
            }
            if(i==3)
            {
                printf("%d",r2);
                r2+=2;
            }
            if(i==2)
            {
                printf("%d",r3);
                r3+=2;
            }
            if(i==1)
            {
                printf("%d",r4);
                r4+=2;
            }
        }
        printf("\n");
    }


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            if(i%2!=0)
            {
                printf("%d",odd);
                odd=odd+2;
            }
            else
            {
                printf("%d",even);
                even=even+2;
            }


        }
        printf("\n");

    }

    return 0;
}
