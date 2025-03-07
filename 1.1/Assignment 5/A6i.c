#include <stdio.h>
#include <math.h>

int fact(int n);
void sum(int n, int x, float *s, int si);

int main()
{
    float a = 1;
    int n, x, si = -1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    sum(n, x, &a, si);
    printf("%f", a);
    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

void sum(int n, int x, float *s, int si)
{
    if (n < 0)
        return;
    else
    {
        int f = fact(n);
        *s = (*s + si * ((pow(x, n) / f)));
        si *= -1;
        sum(n - 2, x, s, si);
    }
}

