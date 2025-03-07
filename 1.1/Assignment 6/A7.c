#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],sub[10];
    gets(a);
    gets(sub);
    int c=0;
    for(int i=0; i<strlen(a); i++)
    {
        int j=0;
        while(a[i+j]==sub[j])
        {
            j++;

            if(sub[j]=='\0')
            {
                c=1;
                break;
            }

        }
    }
    if(c)
        printf("Substring found!!");
    else
        printf("substring not found!!");



    return 0;
}
