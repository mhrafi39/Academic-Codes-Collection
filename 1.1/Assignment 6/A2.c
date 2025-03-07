#include<stdio.h>

int main()
{
    int arry[9]={1,5,10,15,20,40,80,100},num,index;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=0;i<8;i++)
    {
    if(arry[i]<=num&&num<arry[i+1])
       {
        index=i+1;
        for(int j=8;j>=index;j--)
        arry[j+1]=arry[j];

       }
    }
    arry[index]=num;

    for(int i=0;i<=8;i++)
    {
        printf("%d ",arry[i]);
    }

}
