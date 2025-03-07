#include<stdio.h>


int main()
{
    int roll_number,sub1,sub2,sub3,sub4,sub5,phone,total_marks;

    printf("Enter your roll number = ");
    scanf("%d",&roll_number);

    printf("Enter your marks in 5 subject = ");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    total_marks=sub1+sub2+sub3+sub4+sub5;
    float avg=total_marks/5.00;

    printf("Roll = %d\nSubject 1 = %d\nSubject 2 = %d\nSubject 3 = %d\nSubject 4 = %d\nSubject 5 = %d\n",roll_number,sub1,sub2,sub3,sub4,sub5);
    printf("Total marks = %d\navg =%f",total_marks,avg);

    return 0;


}
