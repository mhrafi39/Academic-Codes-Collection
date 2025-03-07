#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],s1[100];
    gets(s);
    gets(s1);
    strcat(s,s1);
    int l= strlen(s);
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;)
        {
            if(s[i]==s[j])
            {
            for(int k=j;k<l;k++)
            {
            s[k]=s[k+1];
            }
            l--;
            }
            else
            {
            j++;
            }

        }
    }
