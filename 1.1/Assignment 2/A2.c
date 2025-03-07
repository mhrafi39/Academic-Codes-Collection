#include<stdio.h>


int main()
{
    int a,sum=0,i;

    for(i=1; i<=10; i++)
    {
        printf("Enter number %d:",i);
        scanf("%d",&a);
        sum+=a;
    }
    float avg=sum/10.00;
    printf("The sum of 10 No is : %d\n",sum);
    printf("The average is : %f",avg);
    return 0;

}
