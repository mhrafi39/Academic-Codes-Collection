#include <stdio.h>



void fun(int n,int *a,int *c,int *r);


int main()
{
    int n,a=0,c=0,r=0;
    scanf("%d",&n);
    fun(n,&a,&c,&r);
    printf("%d,%d,%d",a,c,r);


    return 0;
}
void fun(int n,int *a,int *c,int *r)
{
    if(n==0)
        return ;
    else
    {

        int b=n%10;
        *a+=b;
        *r=*r*10+b;
        *c=*c+1;



        fun(n/10,a,c,r);
    }

}
