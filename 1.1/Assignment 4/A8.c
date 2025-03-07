#include <stdio.h>


void printPermutations(int d1, int d2, int d3)
{
    printf("%d%d%d\n", d1, d2, d3);
    printf("%d%d%d\n", d1, d3, d2);
    printf("%d%d%d\n", d2, d1, d3);
    printf("%d%d%d\n", d2, d3, d1);
    printf("%d%d%d\n", d3, d1, d2);
    printf("%d%d%d\n", d3, d2, d1);
}

int main()
{
    int n, d1, d2, d3;

    printf("Enter a three digit number: ");
    scanf("%d", &n);

    d1 = n / 100;
    d2 = (n / 10) % 10;
    d3 = n % 10;

    printf("All possible numbers:\n");

    printPermutations(d1, d2, d3);

    return 0;
}

