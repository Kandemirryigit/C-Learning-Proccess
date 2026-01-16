///////////////
// FIND OUTPUT
///////////////



#include <stdio.h>

int main()
{
    int arr[5]={10,20,30,40,50};

    int *p=arr;
    printf("%d\n",*p);  // output: 10 

    int x=*p+*(p+4); 
    printf("%d\n",x);  // 10+50=60   output: 60

    int y=*(p+1)+*(p+3);
    printf("%d\n",y);   // 20+40=60  output: 60

    int z=x+y+arr[2];
    printf("%d\n",z);   // 60+60+30=150  output: 150

    printf("%d",z/5);   // 150/5=30  output: 30


    return 0;


}