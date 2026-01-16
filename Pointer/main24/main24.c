#include <stdio.h>
#include <string.h>



int main()
{
   const char *message[5]={"ten","twenty","thirty","fourty","fifty"};

   for (int i=0;i<5;i++)
   {
     printf("%s %d %d\n",message[i],sizeof(message[i]),strlen(message[i]));
   }
  

    return 0;
}