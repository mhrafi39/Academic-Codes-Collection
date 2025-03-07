#include<stdio.h>
#include<math.h>

int fact();
void sum();

int main()
{
    float a=1;
    int n,x;
    scanf("%d%d",&n,&x);
    sum(n,x,&a);
    printf("%f",a);

}
int fact(int n)
{
    if(n==1)
        return 1;
    return fact(n-1)*n;

}

void sum(int n,int x,float *s)
{
    if(n==0)
        return;
    else
    {
        int f=fact(2*n);
        *s=*s+(pow(x,n)/f);
        sum(n-1,x,s);
    }

}
