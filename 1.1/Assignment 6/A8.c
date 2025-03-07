#include<stdio.h>


int main()
{
  int s[]={1,2,3,4,3,2,1,5,6,7,9};
  int l=11;
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
    for(int i=0;i<l;i++)
    {
        printf("%d ",s[i]);
    }


}
