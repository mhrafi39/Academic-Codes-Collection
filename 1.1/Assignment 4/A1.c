#include<stdio.h>


void PrimeFactor();

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    PrimeFactor(n,2);

    return 0;
}
void PrimeFactor(int n,int i)
{
    if(n==0)
        return;
    if(n%i==0)
    {
        printf("%d",i);
        PrimeFactor(n/i,i);
    }
    else
    {

        PrimeFactor(n,i+1);
    }
}
