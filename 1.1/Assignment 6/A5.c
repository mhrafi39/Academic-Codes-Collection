#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    gets(str);
    int l=strlen(str),c;
    for(int i=0; i<l; i++)
    {
        c=0;
        if(str[i]==str[l-1-i])
        {
            c=1;
        }

    }

    if(c)
        printf("Yes");
    else
        printf("NO");
}
