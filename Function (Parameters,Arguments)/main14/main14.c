#include <stdio.h>

int countVowels(char s[])
{
    int count=0;
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            count++;
        }
    }

    return count;
}


int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf(" %[^\n]",s);
    getchar();

    printf("Vowels: %d",countVowels(s));

    return 0;


}