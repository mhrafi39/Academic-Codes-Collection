#include<stdio.h>

void trans(int n,int mat[n][n]);
int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&mat[i][j]);

    trans(n,mat);

}
void trans(int n,int mat[n][n])
{ int matt[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            matt[i][j]=mat[j][i];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            printf("%d ",matt[i][j]);
        }
        printf("\n");
    }


}
