/*
-To find diskriminant,root1,root2
- And understand how functions work

*/



#include <stdio.h>

// To be able to use sqrt() function in my code or other math functions I gotta include this library into my code
#include <math.h> 


// I initilazied the functipons because I created functions below the main function
// As I explained before if I don't initalize the fuınctions here our main function can't know them so program crashes
// 1.way: You can create functions above main function
// 2.way: You can create functions below main function and you can initalize them above main function

int diskriminant(int a,int b,int c);
float root1(int a,int b,int d);
float root2(int a,int b,int d);

int main()
{
    int a=1;
    int b=3;
    int c=-1;
    float area;
    int d=diskriminant(a,b,c);

    printf("Diskriminant: %d\n",d );
    printf("Root1: %3.2f\n", root1(a, b, d));
	printf("Root2: %3.2f\n", root2(a, b, d));
	return 0;

}


// Diskriminant's formul is b^2 -4ac
int diskriminant(int a,int b,int c)
{
    int d;
    d = b * b - 4 * a * c;  
	return d;
}


// To find root1
float root1(int a,int b,int d)
{
    return (- b - sqrt(d)) / 2 * a;
}


// To find root2
float root2(int a,int b,int d)
{
    return (-b + sqrt(d)) / 2 * a;
}