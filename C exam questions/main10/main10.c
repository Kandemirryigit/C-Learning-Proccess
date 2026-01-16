////////////////////////////////////////////////////////////////
// Take two strings from the user 
// and check how many characters are the same from the beginning.
/////////////////////////////////////////////////////////////////




#include <stdio.h>





int func(char *string1,char *string2)
{
    int i=0;
    int count=0;

    while(string1[i]!='\0' && string2[i]!='\0')
    {
        if(string1[i]==string2[i])
        {
            count++;
            i++;
        }
        else
        {
            break;
        }

       
    }

    return count;

}



int main()
{
    char string1[100];
    char string2[100];

    printf("Enter string1: ");
    scanf(" %[^\n]",string1);
    getchar();

    printf("Enter string2: ");
    scanf(" %[^\n]",string2);
    getchar();

    printf("Count: %d",func(string1,string2));


    return 0;
}