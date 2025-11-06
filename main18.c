/*
Find the average of 10 nuumbers
*/


#include <stdio.h>

// %2u means show 2 digit before point

int main()
{
    int grades[10];  // we just can store 10 numbers inside this array
    int count=10;
    float sum=0;
    float average=0;

    printf("Enter the ten numbers to be averaged\n");
    for (int i=0;i<count;i++)
    {
        printf("%2u>",i+1);
        scanf("%d",&grades[i]);
        sum+=grades[i];
    }

    average=sum/count;
    printf("\nAverage of the ten grades entered is: %.2f\n", average);

    return 0;

}

// Make sure that you dont cross the array bounds
// Because if you do, you will get garbage values or your program may crash
// And everything looks normal,The program dont give any error or warning
// Because of this a man said "C is like a knife don't give it to the children"

