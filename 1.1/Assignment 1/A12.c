#include<stdio.h>

int main()
{
    int cy,cm,cd,by,bm,bd;
    printf("Enter your birth date (DD MM YYYY)");
    scanf("%d%d%d",&bd,&bm,&by);
    printf("Enter the current date (DD MM YYYY)");
    scanf("%d%d%d",&cd,&cm,&cy);
    int age_year=cy-by;
    int age_month,age_day;
    age_month=cm-bm;
    age_day=cd-bd;
    if(age_month<0)
        age_month*=(-1);
    if(age_day<0)
        age_day*=(-1);



    printf("Your age is %d year %d month %d day",age_year,age_month,age_day);
    return 0;


}
