/////////////////
// STRING COMPARE
/////////////////


#include <stdio.h>
#include <strings.h>


int main()
{
    char pass1[50],pass2[50];

    printf("Enter password: ");
    scanf(" %[^\n]", pass1);
    getchar();

    printf("Re-enter password: ");
    scanf(" %[^\n]", pass2);
    getchar();

    if(strcmp(pass1,pass2)==0)  // strcmp returns 0 if equal
    {
        printf("Passwords match!");
    }
    else
    {
        printf("Passwords do NOT match!");
    }

    return 0;

}

