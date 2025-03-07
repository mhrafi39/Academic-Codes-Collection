#include <stdio.h>

int main()
{
    int marks[5];
    int totalMarks = 0;
    float avg;
    char grade;

    printf("Enter the marks for five subjects:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    avg = (float)totalMarks / 5;

    switch ((int)avg / 10)
    {
    case 10:
    case 9:
        grade = 'S';
        break;
    case 8:
        grade = 'A';
        break;
    case 7:
        grade = 'B';
        break;
    case 6:
        grade = 'C';
        break;
    case 5:
        grade = 'D';
        break;
    default:
        grade = 'F';
        break;
    }


    printf("Grade: %c\n", grade);

    return 0;
}
