
#include <stdio.h>

int main()
{
    int employeeCode;
    char employeeName[10];
    float basicSalary,HRA,DA,CCA,GS,PF,IT,NS;

    printf("Enter employee code: ");
    scanf("%d", &employeeCode);

    printf("Enter employee name: ");
    scanf("%s",employeeName);
    printf("Enter basic salary: ");
    scanf("%f",&basicSalary);

    HRA =0.4*basicSalary;
    DA =0.1*basicSalary;
    CCA =0.05*basicSalary;
    GS = basicSalary+ HRA+DA+CCA;
    PF =0.1*GS;
    IT =0.1*GS;

    printf("\nEmployee Details:\n");
    printf("Employee Code: %d\n",employeeCode);
    printf("Employee Name: %s\n",employeeName);
    printf("Basic Salary: %f\n",basicSalary);
    printf("HRA: %f\n", HRA);
    printf("DA: %f\n", DA);
    printf("CCA: %f\n", CCA);
    printf("GS: %f\n", GS);
    printf("PF: %f\n", PF);
    printf("IT: %f\n", IT);

    return 0;
}
