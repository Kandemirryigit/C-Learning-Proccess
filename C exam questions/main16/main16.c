//////////////////////////////////////
// TO CEHCK PASSWORD IS STRONG OR WEAK 
//////////////////////////////////////


#include <stdio.h>



int passwordCheck(char password[])
{
    int passwordLength=0;
    int i=0;
    int lowercaseCharacterCount=0;
    int uppercaseCharacterCount=0;
    int notCharacterCount=0;
    int numberCount=0;
    
    while(password[i]!='\0')
    {
        passwordLength++;
        i++;
    }

    if(passwordLength<8)
        return 0;
        
    
    for(int i=0;i<passwordLength;i++)
    {
        if(password[i]>='A' && password[i]<='Z')
            uppercaseCharacterCount++;
        else if(password[i]>='a' && password[i]<='z')
            lowercaseCharacterCount++;
        else if(password[i]>='0' && password[i]<='9')
            numberCount++;
        else
            notCharacterCount++;    
    }

    if(uppercaseCharacterCount>0 &&
            lowercaseCharacterCount>0 &&
            numberCount>0 &&
            notCharacterCount>0)
            return 1;  // Strong
    else
            return 0;  // Weak

}




int main()
{
    char password[100];
    printf("Create a password: ");
    scanf(" %[^\n]",password);
    getchar();

    int result=passwordCheck(password);

    if(result)
        printf("Password is strong");
    else
    {
        printf("Please create a strong password");
    }
        
    return 0;
}