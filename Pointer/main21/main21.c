#include <stdio.h>



int main()
{
   int array[10]={10,20,30,40,50,60,70,80,90,100};
   int *ptr=&array[9];

   ptr-=6;

   printf("%d\n",*ptr); //output: 40


    return 0;
}