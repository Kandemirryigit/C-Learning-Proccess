#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr=NULL;
    int i=0;
    int number;
    int count=0;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        getchar();

        if(number==0) break;

        if(count==0)
        {
            count++;
            ptr=malloc(count*sizeof(int));
            ptr[0]=number;
        }
        else
        {
            for(i=0;i<count;i++)
            {
                if(ptr[i]==number) break;
            }
            if(i==count)
            {
                count++;
                ptr=realloc(ptr,count*sizeof(int));
                ptr[count-1]=number;
            }

        }

        for(i=0;i<count;i++)
        {
            printf("%d\n",ptr[i]);
        }
    }

    return 0;

    
}