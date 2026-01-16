#include <stdio.h>

int length(char s[])
{
    int i=0;

    while(s[i]!='\0')
    {
        i++;
    }

    return i;
}


int main()
{
    char s[]="Computer";
    printf("Length: %d",length(s));
    return 0;
}