
#include <stdio.h>

int main()
{
    int salary,HRA,DA;
    printf("Enter a person salary = ");
    scanf("%d",&salary);
    if(salary>=5000 && salary<=10000)
    {
        HRA=0.1 * salary;
        DA=0.05 * salary;
        printf("HRA is %d\nDA is %d",HRA,DA);

    }
    else if(salary>10000 && salary<=15000)
    {
        HRA=0.15 * salary;
        DA=0.08 * salary;
        printf("HRA is %d\nDA is %d",HRA,DA);

    }

    return 0;
}
