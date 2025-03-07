#include <stdio.h>
int prime();
int cheack();

int main()
{

    int n,i=2;
    scanf("%d",&n);
    if(cheack(n,i))
        printf("Sum of two prime numbers");
    else
        printf("Not sum of two prime numbers");

    return 0;

}
int prime(int n,int i)
{
    if(i==n)
        return 1;
    else if(n%i!=0)
        prime(n,i+1);
    else
        return 0;


}


int cheack(int n,int i)
{
    if(i>n/2)
        return 0;

    else if(prime(i,2)&&prime(n-i,2))
        return 1;

       return cheack(n,i+1);
}
