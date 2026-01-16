#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int *ptr;
    ptr=malloc(10*sizeof(int));

    for(int i=0;i<10;i++)
    {
        ptr[i]=i*10;
        printf("%lu %d\n",&ptr[i],ptr[i]);
    }

    free(ptr);

    return 0;
}