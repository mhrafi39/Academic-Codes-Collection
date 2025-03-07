#include <stdio.h>

int main()
{
    int choice;
    printf("Choice Conversion\n1 Fahrenheit to Celsius\n2 Celsius to Fahrenheit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {

        float far,cel;
        printf("Enter Temperature in Fahrenheit : ");
        scanf("%f",&far);
        cel=(0.5*(far-32));
        printf("Temperature is %f degree Celsius",cel);
        break;
    }

    case 2:
    {

        float far,cel;
        printf("Enter Temperature in Celsius : ");
        scanf("%f",&cel);
        far=(1.8*cel+32);
        printf("Temperature is %f degree Fahrenheit",far);
        break;
    }
    default:
    {

        printf("Invalid choice");
    }

    }


    return 0;
}

