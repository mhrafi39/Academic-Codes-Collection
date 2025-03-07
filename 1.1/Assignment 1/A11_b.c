
#include <stdio.h>

int main()
{
    int num1,num2;

    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Numbers before swap\nnumber 1 %d\nNumber 2 %d\n",num2,num1);
    printf("Numbers After swap\nnumber 1 %d\nNumber 2 %d",num1,num2);



    return 0;
}
