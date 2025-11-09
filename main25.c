/*
- Find a circle's area and perimeter
- And see that hohw can we use define efecctive 
*/


#include <stdio.h>

// pi is going to be equal everwhere so I don't have to write 3.14 everytime
// I just can write pi when I want to use it
#define pi 3.14



int main(void)
{
    int r=10;
    float area;
    float perimeter;

    area=pi*r*r;
    perimeter=2*pi*r;

    printf("Area of circle is: %.2f \n",area);
    printf("Periemeter of circle is: %.2f \n",perimeter);

    return 0;

}