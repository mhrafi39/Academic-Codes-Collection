#include<stdio.h>
#include<string.h>

void rev(char *a,int l);


int main()
{
    char str[100];
    gets(str);
    int l=strlen(str);
    rev(&str,l);
    puts(str);

}

void rev(char *a,int l)
{
    int i=0;
    int j=l-1;
    for(int i=0; i<l/2; i++)
    {
        char t=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=t;
        j--;
    }
    return;
}
