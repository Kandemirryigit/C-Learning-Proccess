// This is the power of dynamic memory allocation


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *arr=NULL;
    int size=0,capacity=2;
    int num;

    arr=malloc(capacity*sizeof(int));
    if(arr==NULL)
    {
        printf("malloc is unsuccessful");
        return 1;
    }

    printf("Enter numbers (-1 to stop):\n");

    while(1)
    {
        scanf("%d",&num);
        if(num==-1)
        {
            break;
        }

        if(size==capacity)
        {
            capacity*=2;
            int *temp=realloc(arr,capacity*sizeof(int));
            if(temp==NULL)
            {
                printf("realloc is unsuccessful");
                free(arr);
                return 1;
            }

            arr=temp;
        }
        arr[size]=num;
        size++;

    }

    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    free(arr);
    return 0;
}