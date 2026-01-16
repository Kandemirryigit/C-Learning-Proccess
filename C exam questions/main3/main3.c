//////////////////////////////////////////////////
// CREATE AN ARRAY WITH DYNAMIC MEMORY ALLOCATION
// TAKE INTEGERS TO THAT ARRAY
// FIND AVERAGE OF NUMBERS IN THE ARRAY
//////////////////////////////////////////////////





#include <stdio.h>
#include <stdlib.h>


int main()
{
    int size=0;
    int sum=0;
    float average;

    printf("What is the size of your array: ");
    scanf("%d",&size);
    getchar();

    int *arr=malloc(size*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory Allocation is Unsuccessful");
    }

    for(int i=0;i<size;i++)
    {
        printf("Number-%d: ",i+1);
        scanf("%d",&arr[i]);
        getchar();
    }

    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

    average=sum/size;

    printf("Average: %.2f",average);


    return 0;


}