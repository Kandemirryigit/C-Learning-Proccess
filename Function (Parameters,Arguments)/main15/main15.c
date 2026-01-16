#include <stdio.h>


struct Student
{
    int id;
    float grade;
};


void print(struct Student s)
{
    printf("\nID: %d\n",s.id);
    printf("GRADE: %.2f\n",s.grade);
}


int main()
{
    struct Student st1;
    st1.id=101;
    st1.grade=85.5;
    print(st1);

    struct Student st2;
    st2.id=102;
    st2.grade=90.2;
    print(st2);

    return 0;

}