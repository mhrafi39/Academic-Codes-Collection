#include<stdio.h>




int main()
{
    int n;
    for(int i=1;; i++)
    {
        printf("Enter a number ");
        scanf("%d",&n);
        if(n%2!=0)
        {
            printf("%d\n",n);
        }
        if(n<=-1)
        {
            break;
        }


    }
    return 0;
}

