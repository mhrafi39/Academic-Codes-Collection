#include<stdio.h>

void print1d();
void printnumber2d();


int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Zero");
    }
    else
    printnumber2d(n);

    return 0;
}
void print1d(n)
{
    switch(n%10)
    {
           case 0:
            break;
            case 1:
            printf("One");
            break;
            case 2:
            printf("Two");
            break;
            case 3:
            printf("Three");
            break;
            case 4:
            printf("Four");
            break;
            case 5:
            printf("Five");
            break;
            case 6:
            printf("Six");
            break;
            case 7:
            printf("Seven");
            break;
            case 8:
            printf("Eight");
            break;
            case 9:
            printf("Nine");
            break;

    }

}
void printnumber2d(n)
{
    if(n>=10&&n<=20)
    {
        switch(n)
        {
            case 10:
            printf("Ten");
            break;
            case 11:
            printf("Eleven");
            break;
            case 12:
            printf("Twelve");
            break;
            case 13:
            printf("Thirteen");
            break;
            case 14:
            printf("Fourteen");
            break;
            case 15:
            printf("Fifteen");
            break;
            case 16:
            printf("Sixteen");
            break;
            case 17:
            printf("Seventeen");
            break;
            case 18:
            printf("Eighteen");
            break;
            case 19:
            printf("Ninteen");
            break;
            case 20:
            printf("Twenty");
            break;
        }
    }
    else if(n>=21&&n<=99)
    {

       {
           switch(n/10)
           {
            case 2:
            printf("Twenty");
            break;
            case 3:
            printf("Thirty");
            break;
            case 4:
            printf("Fourty");
            break;
            case 5:
            printf("Fifty");
            break;
            case 6:
            printf("Sixy");
            break;
            case 7:
            printf("Seventy");
            break;
            case 8:
            printf("Eighty");
            break;
            case 9:
            printf("Ninghty");
            break;

           }
           printf(" ");
           print1d(n);
       }
    }

}

