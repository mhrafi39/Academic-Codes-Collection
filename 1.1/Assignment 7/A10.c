
#include<stdio.h>

void add(int n,int m,int mat1[n][m],int mat2[n][m]);

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int mat1[n][m],mat2[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    add(n,m,mat1,mat2);
    return 0;

}
void add(int n,int m,int mat1[n][m],int mat2[n][m])
{
    int result[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            result[i][j]=mat1[i][j]+mat2[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
