#include<stdio.h>

int main()
{

    int a,b,c,lcm;
    printf("Enter three numbers " );
    scanf("%d %d %d",&a,&b,&c);

    lcm=a>b?(a>c?a:c):(b>c?b:c);
    for( ; ; )
    {

        if(lcm%a==0&&lcm%b==0&&lcm%c==0)
        {
            break;
        }
        lcm++;
    }
    printf("%d",lcm);
    return 0;
}
