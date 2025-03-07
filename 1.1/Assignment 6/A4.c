#include <stdio.h>

int main()
{
    char a[100];
    gets(a);
    int c=0,w=1,l;
    l=strlen(a);
    for(int i=0; i<l; i++)
    {
        if(a[i]==' ')
            w++;
        else
            c++;
    }
    printf("There are %d letters & %d words",c,w);


    return 0;
}
