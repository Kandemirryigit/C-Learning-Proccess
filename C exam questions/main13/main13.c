/////////////////////////
// SEZAR ENCRYPTION
/////////////////////////

#include <stdio.h>


int main()
{
    char string[100];
    int shift;
    int i=0;


    printf("Enter a string: ");
    scanf(" %[^\n]",string);
    getchar();


    printf("Enter shift number: ");
    scanf("%d",&shift);
    getchar();

    shift=shift%26;

    while(string[i]!='\0')
    {
        if(string[i]>='a' && string[i]<='z')    // only accept letters
        {
            string[i]=((string[i]-'a'+shift)%26)+'a';
        }
        i++;
    }

    printf("Encrypted: %s", string);
    return 0;


}