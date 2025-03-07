#include <stdio.h>

int main()
{
    int a,b,p,i,j;
    printf("Enter a range a - b ");
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++)
    {
        p=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }

        }
        if(p)
        {
            printf("%d\n",i);
        }

    }

    return 0;
}
