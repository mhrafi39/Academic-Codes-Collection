#include <stdio.h>

int main()
{
    int n,diff,sum,sign;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = 0;
    diff = 5;
    sign = 1;

    for (int i = 0; i < n; i++)
    {
        sum += sign * diff;
        diff += 6;
        sign *= -1;
    }

    printf("The sum of the series is: %d\n", sum);

    return 0;
}

