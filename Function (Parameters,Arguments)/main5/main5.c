#include <stdio.h>

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int x,y;
    printf("X: ");
    scanf("%d",&x);
    printf("Y: ");
    scanf("%d",&y);
    printf("Max=%d\n",max(x,y));
    return 0;
    
}