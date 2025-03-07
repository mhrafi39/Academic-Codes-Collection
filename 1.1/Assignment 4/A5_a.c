#include <stdio.h>
int fact();
int main()
{
    int n,sign=-1,i;
    float x;
    printf("Enter the value of x , n ");
    scanf("%f%d",&x,&n);
    for(i=3; i<=n; i=i+2)
    {
        x+=sign*(x/fact(i));


        sign*=-1;
    }
    printf("%f",x);


    return 0;
}
int fact(n)
{
    if(n==1)
        return 1;
    return fact(n-1)*n;
}
