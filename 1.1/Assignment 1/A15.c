#include <stdio.h>

int main()
{
    int units;
    float bill;
    const float rate1 = 0.40;
    const float rate2 = 0.50;
    const float rate3 = 0.60;
    const float meterCharges=50.0;

    printf("Enter the number of units consumed: ");
    scanf("%d",&units);

    if (units <= 100)
    {
        bill=units*rate1;
    }
    else if (units<=300)
    {
        bill = 100*rate1+(units-100)*rate2;
    }
    else
    {
        bill=100*rate1+200*rate2+(units-300)*rate3;
    }

    bill+=meterCharges;

    printf("Electricity Bill: Rs. %f", bill);

    return 0;
}
