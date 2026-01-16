#include <stdio.h>



int findEven(int arr[],int count,int arr2[])
{
    int countEven=0;

    for(int i=0;i<count;i++)
    {
        if(arr[i]%2==0)
        {
            arr2[countEven]=arr[i];
            countEven++;
        }
    }

    return countEven;
}



int main()
{
    
    int arr[10]={5,15,8,9,72,48,65,5,1,5};
    int count=sizeof(arr)/sizeof(arr[0]);  // My array contains integer values so I can't use '\0'
    int arr2[count];
    int evenCount=findEven(arr,count,arr2);

    printf("Total even number count: %d\n",evenCount);

    printf("Even Numbers: ");
    for(int i=0;i<evenCount;i++)
    {
        printf("%d ",arr2[i]);
    }
    

    return 0;
}