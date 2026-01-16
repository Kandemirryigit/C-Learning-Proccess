#include <stdio.h>

void test(int *p)
{
    *p=20;
}

int main()
{
    int a=5;
    test(&a);
    printf("a: %d",a);

    return 0;

}