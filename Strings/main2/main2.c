//////////////
// STRING COPY
//////////////


#include <stdio.h>
#include <strings.h>


int main()
{
    char source[50]="Hello, C";
    char destination[50];

    strcpy(destination,source);
    printf("Copied String: %s",destination);

    return 0;


}