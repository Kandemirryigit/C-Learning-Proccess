#include <stdio.h>



int main()
{
   char message[100]="Hello,World!";
   char *p=message;

   int s=0;
   while(*p++)  // if *p++ not equal to /0
   {
    s++;
   }

   printf("%d",s);

    return 0;
}