#include <stdio.h>

int square(int x)
{
    return x*x;
}



int main()
{
    int n;
    printf("Enter an Integer number: ");
    scanf("%d",&n);
    getchar();
    printf("Square=%d\n",square(n));
    return 0;
}