#include <stdio.h>
#include<ctype.h>

void func(char *a);

int main()
{
    char str[100];
    gets(str);
    func(str);
    puts(str);


    return 0;
}
void func(char *a)
{
    int i=0;
    *a=toupper(*a);
    while(*(a+i)!='\0')
    {
        if(*(a+i)==' ')
            *(a+i+1)=toupper(*(a+1+i));
        i++;
    }
    return;

}
