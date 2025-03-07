#include <stdio.h>

int main()
{
    int choice;
    float PI=3.1416,radius;


    printf("Enter the choice (1 for area, 2 for circumference): ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:

    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        float area = PI * radius * radius;
        printf("The area of the circle is: %f\n", area);
        break;
    }
    case 2:

    {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        float circumference = 2 * PI * radius;
        printf("The circumference of the circle is: %f\n", circumference);
        break;
    }
    default:
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}

