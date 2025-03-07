#include<stdio.h>
#include<string.h>

int find(char *a,char *b,int x,int y);

int main()
{
    char str[100],substr[10];
    gets(str);
    gets(substr);
    int l=strlen(str),l1=strlen(substr);
    if(find(str,substr,l,l1))
    {
        printf("Found");
    }
    else
        printf("Not found");

}
int find(char *a,char *b,int x,int y)
{
    int c=0;
    int i=0;
    for(int i=0; i<x; i++)
    {
        int j=0;
        if(*(a+i)==*(b+j))
        {
            while(*(b+j)!='\0')
            {
                if(*(a+i+j)==*(b+j))
                {
                    c=1;
                    j++;
                }
                else
                    c=0;
            }

        }
    }
    return c;
}
