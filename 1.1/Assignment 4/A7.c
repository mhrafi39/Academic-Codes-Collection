#include<stdio.h>


void bin();

int main()
{

    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("The binary value is : ");
    bin(n);
    return 0;
}

void bin(int n)
{

    if(n==0)
        return;

    int a=n%2;
    bin(n/2);
    printf("%d",a);

}

