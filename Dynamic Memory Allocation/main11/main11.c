#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sum=0;

    printf("How many numbers: ");
    scanf("%d",&n);

    float *arr=calloc(n,sizeof(float));
    if(arr==NULL)
    {
        printf("Calloc is unsuccessful");
        return 1;
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }

    printf("Sum= %.2f\n",sum);
    printf("Average= %.2f\n",sum/n);

    // I'm sure that I'll not use arr again cause of that I didnt write arr=NULL 
    free(arr);

    return 0;
}

