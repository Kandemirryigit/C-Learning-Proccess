#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr=malloc(3*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation is unsuccessful");
        return 1;
    }

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    // It is vital to create a new pointer to realloc
    int *temp=realloc(arr,5*sizeof(int));
    if(temp==NULL)
    {
        printf("Realloc is unseccessful");
        return 1;
    }

    arr=temp;  // temp is for just a copy for arr

    arr[3]=30;
    arr[4]=40;

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
    arr=NULL;

    return 0;
}


// If you are sure from that you are not going to use that pointer again then you dont need
// to Use arr=NULL 