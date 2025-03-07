#include<stdio.h>



int sum();
int main()
{
    int i,n,a=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=0; i<=n; i=i+2)
    {

        a+=sum(n-i);
    }
    printf("%d",a);
    return 0;
}

int sum(int n)
{
    int a;
    if(n==0)
        return 0;
    a=sum(n-2)+n;
    return;
}
