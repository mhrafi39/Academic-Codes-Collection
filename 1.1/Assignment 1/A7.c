#include <stdio.h>

int main() {
    int num1, num2;
    int quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &num1);

    printf("Enter the divisor: ");
    scanf("%d", &num2);

    quotient = num1 / num2;

    remainder = num1 - (quotient * num2);

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
