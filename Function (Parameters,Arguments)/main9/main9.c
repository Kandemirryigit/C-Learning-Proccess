#include <stdio.h>

int maxArray(int arr[],int n)
{
    int max=arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }

    return max;
}


int main()
{
    int a[5]={3,7,2,9,5};
    printf("MAX: %d",maxArray(a,5));

    return 0;
}