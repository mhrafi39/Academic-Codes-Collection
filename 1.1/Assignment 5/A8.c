#include<stdio.h>

void bin();


int main()
{
    int n,b=0;
    scanf("%d",&n);
    bin(n,&b);
    printf("%d",b);
    return 0;

}

void bin(int n,int *p)
{
    int b;
    if(n<=0)
        return;
    else

        b=n%2;
    bin(n/2,p);
    *p=*p*10+b;
}
