#include<stdio.h>

int cheack(int n,int m,int mat1[n][m],int mat2[n][m]);

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
    printf("%d",cheack(n,m,mat1,mat2));

}
int cheack(int n,int m,int mat1[n][m],int mat2[n][m])
{
    int c=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(mat1[i][j]==mat2[i][j])
                c = 1;
            else
                return 0;
        }
    }
    return c;
}
