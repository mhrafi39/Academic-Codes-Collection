#include<stdio.h>



void angs();


int main()
{

    for(int i=1; i<=10000; i++)
    {

        angs(i);
    }
    return 0;
}

void angs(int n)
{
    int a,c,sum=0;
    int x=n;
    while(n!=0)
    {
        a=n%10;
        c=a*a*a;
        sum+=c;
        n/=10;
    }

    if(sum==x)
        printf("%d\n",x);
}
