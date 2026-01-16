#include <stdio.h>



int main()
{
   int array[10]={10,20,30,40,50,60,70,80,90,100};
   int *ptr=array;

   printf("%d",*++ptr);  // output: 20


    return 0;
}