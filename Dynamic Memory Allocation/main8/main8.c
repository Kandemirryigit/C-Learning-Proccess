// This program proves that calloc initalize variables with 0


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *arr=calloc(5,sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation is unsuccessful");
        return 1;
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
    arr=NULL;

    return 0;
}