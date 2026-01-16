#include <stdio.h>



int main()
{
   int array[10]={10,20,30,40,50,60,70,80,90,100};
   int *ptr=array;  // same as &array[0] 

   printf("%d\n",*ptr); // output:10
   printf("%d\n",*(ptr+5));  //output: 60


    return 0;
}