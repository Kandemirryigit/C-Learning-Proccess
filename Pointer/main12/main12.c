#include <stdio.h>

int main()
{
    int num1=10;
    int num2=20;
    int *pnum=NULL;

    pnum=&num1;  //pnum stores the address of the num1 variable
    *pnum=50;  // num1=50
    ++num2;  //num2 =21
    num2+=*pnum; //num2= 21+50=71

    pnum=&num2; //pnum stores the address of the num2 
    ++*pnum; //71+1=72

    printf("num1: %d , num2: %d , *pnum=%d , *pnum+num2=%d",num1,num2,*pnum,*pnum+num2);
    
    return 0;
}
