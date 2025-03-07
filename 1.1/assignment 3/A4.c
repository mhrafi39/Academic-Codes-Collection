#include<stdio.h>

int main()
{
    int x,n,r=1;
    printf("Enter x and n");
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        r*=x;
    }
    printf("%d",r);
    return 0;
}
