#include <stdio.h>
int Sum();
int main()
{
    int n,s,a;
    printf("Enter an Even Number : ");
    scanf("%d",&n);
    s=Sum(n);
    a=n/2;

    printf("Sum of first n Even Number %d\n",s);
    printf("Average of first n Even Number %d\n",s/a);


    return 0;
}
int Sum(int n)
{
    if(n==0)
        return 0;
    return Sum(n-2)+n;
}
