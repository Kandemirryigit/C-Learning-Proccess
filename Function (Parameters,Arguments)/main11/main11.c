#include <stdio.h>

void print(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
}


int main()
{
    int a[4]={10,20,30,40};
    print(a,4);
    return 0;
}