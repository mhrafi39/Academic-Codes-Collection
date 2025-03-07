#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int arr[] = {12, 3, 45, 7, 10, 19};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    printf("%d-th maximum: %d\n",k,arr[size-k]);
    printf("%d-th minimum: %d\n",k,arr[k-1]);

    return 0;
}
