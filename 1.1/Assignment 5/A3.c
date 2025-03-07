#include<stdio.h>


int prime();

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(1)
    {
        if(a>b)
            break;
        if(prime(a,2))
            printf("%d is a prime number\n",a);
        a++;

    }
    return 0;


}
int prime(int n,int i)
{
    if(i==n)
        return 1;
    else if(n%i!=0)
        prime(n,i+1);
    else
        return 0;


}
