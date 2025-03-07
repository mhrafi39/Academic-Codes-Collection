#include<stdio.h>

int lcm();

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",lcm(a,b));
}
int lcm(int a,int b)
{

    int lcm=a>b?a:b;
    while(1)
    {

        if(lcm%a==0&&lcm%b==0)
            return lcm;
        else
            lcm++;
    }
}
