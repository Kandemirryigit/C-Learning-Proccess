////////////////////
// CONVERT LOWERCASE
////////////////////


#include <stdio.h>
#include <ctype.h>


int main()
{
   char str[100];

   printf("Enter a string: ");
   scanf(" %[^\n]",str);

   for(int i=0;str[i]!='\0';i++)
   {
        str[i]=tolower(str[i]);
   }

   printf("Word: %s",str);

    return 0;


}