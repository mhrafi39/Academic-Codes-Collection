#include<stdio.h>
#include<string.h>


int main()
{
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    int fr1[26]= {0};
    int fr2[26]= {0};

    for(int i=0; i<strlen(s1); i++)
    {
        fr1[s1[i]-'a']++;
    }
    for(int i=0; i<strlen(s2); i++)
    {
        fr2[s2[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(fr1[i]>0&&fr2[i])
            printf("%c ",i+'a');
    }
    return 0;
}
