#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *ptr=NULL;    // Created a null pointer to dynamic memory allocation
    int *new=NULL;    // Created a null pointer to dynamic memory allocation
    int number;
    int count=0;
    int i=0;

    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&number);
        getchar();

        if(number==0)
            break;

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
                if(ptr[i]==number)
                    break;
            }

            if(i==count)
            {
                count++;
                new=malloc(count*sizeof(int));
                for (i = 0; i < count - 1; i++) {
					new[i] = ptr[i];
				}
				new[count - 1] = number;
				free(ptr);
				ptr = new;
            }

        }

        for(i=0;i<count;i++)
        {
            printf("%d\n",ptr[i]);
        }
    }

    return 0;

    
}