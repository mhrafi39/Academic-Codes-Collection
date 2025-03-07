#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d is Greatest",a);
    else if(b>c && b>a)
        printf("%d is Greatest",b);
    else
        printf("%d is greatest",c);

    return 0;
}
