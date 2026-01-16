#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation is unsuccessful");
        return 1;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
    arr=NULL;

    return 0;

}