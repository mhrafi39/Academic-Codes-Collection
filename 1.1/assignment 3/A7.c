#include<stdio.h>

int main()
{
   int n,i,n1=0,n2=1,a;
   printf("Enter a number");
   scanf("%d",&n);
   if(n==0)
   {
       printf("0");
   }
   else if(n==1)
   {
       printf("0 1");
   }
   else
   { printf("0 1 ");
       for(i=3;i<=n;i++)
       {
           a=n1+n2;

           printf("%d ",a);
           n1=n2;
           n2=a;

       }
   }
   return 0;
}
