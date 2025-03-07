#include <stdio.h>
#include <string.h>

int main()
{
    char arry[20] = {"bangadesh"};
    char element;

    printf("The word is %s\nEnter a position and an element you want to insert: ", arry);

    int length = strlen(arry), index;
    scanf("%d %c", &index, &element);

    for (int i = length; i >= index; i--)
    {
        arry[i + 1] = arry[i];
    }

    arry[index] = element;

    for (int i = 0; i <= length + 1; i++)
    {
        printf("%c", arry[i]);
    }

    return 0;
}

