#include <stdio.h>

int main() {
    float salary, tax;

    printf("Enter the monthly salary: ");
    scanf("%f", &salary);

    if (salary >= 9000) {
        tax = 0.4 * salary;
    } else if (salary >= 7500 && salary < 9000) {
        tax = 0.3 * salary;
    } else {
        tax = 0.2 * salary;
    }

    printf("The income tax is: %f", tax);

    return 0;
}
