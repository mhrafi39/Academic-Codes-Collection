#include<stdio.h>

void sum(int n,int m,int a[n][m]);

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arry[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arry[i][j]);
        }
    }
    sum(n,m,arry);


}
void sum(int n,int m,int a[n][m])
{
    int i,j,sum;
    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<m; j++)
        {
            sum+=a[i][j];
        }
        printf("Sum of row %d = %d\n",i+1,sum);
    }
    for(i=0; i<m; i++)
    {
        sum=0;
        for(j=0; j<n; j++)
        {
            sum+=a[j][i];
        }
        printf("Sum of colum %d = %d\n",i+1,sum);
    }
}
