// This program proves that malloc initalize variables with garbage value

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *arr=malloc(5*sizeof(int));
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