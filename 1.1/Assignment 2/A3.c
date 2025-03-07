#include<stdio.h>


int main()
{
    int n;
    for(int i=1; i<=10; i++)
    {
        printf("Enter number %d =\n",i);
        scanf("%d",&n);
        if(n%2==0)
            printf("%d is a even number\n\n",n);

    }


    return 0;
}
