#include<stdio.h>


int fact();
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("%d",n-/3);


}
int fact(int n)
{
    if(n<=1)
        return 1;
    int a=fact(n-1)*n;
    return a;
}
