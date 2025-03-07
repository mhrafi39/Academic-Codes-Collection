#include<stdio.h>


int reverse(int n,int sum);

int square();
int main()
{
    int i,r,r1,s,s1;
    for(i=10;i<=500;i++)
    {


    s=square(i);
    r=reverse(i,0);
    s1=square(r);
    r1=reverse(s1,0);
    if(s==r1)
    {
        printf("%d\n",i);
    }
    }

    return 0;
}

int reverse(int n,int sum)
{   if(n==0)
      return sum;
    int a;
    a=n%10;
    sum=sum*10+a;
    return reverse(n/10,sum);

}
int square(n)
{
    return n*n;

}
