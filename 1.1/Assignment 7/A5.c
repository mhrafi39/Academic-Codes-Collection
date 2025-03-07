#include<stdio.h>

void product(int n,int m,int mat1[n][m],int a,int mat2[m][a]);

int main()
{
    int n,m,a,b;
    scanf("%d%d",&n,&m);
    int mat1[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    int mat2[a][b];
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    product(n,m,mat1,b,mat2);

}
void product(int n,int m,int mat1[n][m],int b,int mat2[m][b])
{
    int result[n][b];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<b; j++)
        {
            result[i][j]=0;
            for(int k=0; k<m; k++)
            {
                result[i][j]+=mat1[i][k]*mat2[j][k];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<b; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return;
}
