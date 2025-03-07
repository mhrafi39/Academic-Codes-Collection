#include<stdio.h>
#include<math.h>



int main()
{
    int a,b,c,d,rhs,lhs;
    printf("Enter 4 digits a b c d = ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    lhs=(pow(a,3)+pow(b,3)+pow(c,3));
    rhs=pow(d,3);
    switch(lhs==rhs)
    {
    case 1:
        printf("The equation is satisfied");
        break;
    case 0:
        printf("The equation is not satisfied");
        break;
    }
    return 0;
}
