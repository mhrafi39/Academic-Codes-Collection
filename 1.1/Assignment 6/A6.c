#include <stdio.h>
#include<string.h>

int main()
{
    char text[100];
    int freq[256]= {0};
    gets(text);
    int l=strlen(text);
    for(int i=0; i<l; i++)
    {
        freq[text[i]]++;

    }
    for(int i=0; i<256; i++)
    {
        if(freq[i]!=0)
            printf("%c %d\n",i,freq[i]);
    }


    return 0;
}
