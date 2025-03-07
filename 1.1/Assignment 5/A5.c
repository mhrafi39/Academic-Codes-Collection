#include<stdio.h>


void pfact();

int main()
{
    int n;
    scanf("%d",&n);
    printf("Prime Factors of %d are:\n",n);
    pfact(n,2);

}

void pfact(int n,int i)
{
    if(n<=0)
            return;
    else if(n%i==0)
    {
        printf("%d ",i);
        pfact(n/i,i);
    }

    else
        pfact(n,i+1);
}
