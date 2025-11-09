/*
Learning do-while
*/


#include <stdio.h>


int main()
{
    int i=1;
    float number=0;
    float sum=0;

    do{
        printf("Number%d:",i);
        scanf("%f",&number);
        sum+=number;
        i++;
    }while(i<=3);

    printf("Total sum is: %.2f",sum);

    return 0;

}