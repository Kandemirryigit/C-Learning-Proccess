// Write a C program to calculate the weekly payment of an employee based on the following criteria:
// 1. The employee is paid $12 per hour for the first 40 hours worked in a week.
// 2. For hours worked beyond 40 hours, the employee is paid $18 per hour.
// 3. The payment is subject to the following tax rates:
//    - 15% for the first $300
//    - 20% for the next $150
//	  - 25% for any amount above $450
// The program should prompt the user to enter the number of hours worked in a week and then display the final payment after tax deductions.



#include <stdio.h>

int main(void)
{
    float workHours;
    float rawPayment;
    float extraHoursPayment;
    float extraHours;
    float tax;
    float totalPayment;
    float salary;

    printf("How much hours did you work this week: ");
    scanf("%f",&workHours);

    if (workHours<=40)
    {
        extraHoursPayment=0;
        rawPayment=12*workHours;
        if (rawPayment<=300)
        {
            tax=rawPayment*0.15;
            totalPayment=rawPayment;
            salary=totalPayment-tax;
        }
        else if (rawPayment>300 && rawPayment<=450)
        {
            tax=(300*0.15)+(rawPayment-300)*0.20;
            totalPayment=rawPayment;
            salary=totalPayment-tax;
        }
        else
        {
            tax=(300*0.15)+(150*0.20)+(rawPayment-450)*0.25;
            totalPayment=rawPayment;
            salary=totalPayment-tax;
        }
    }


    else
    {
        rawPayment=480;
        extraHours=workHours-40;
        extraHoursPayment=extraHours*18;
        totalPayment=rawPayment+extraHoursPayment;
        tax=(300*0.15)+(150*0.20)+((totalPayment-450)*0.25);
        salary=totalPayment-tax;
    }


    printf("\nYour raw payment is: %.2f$",rawPayment);
    printf("\nYour extra hours payment is: %.2f$",extraHoursPayment);
    printf("\nYour total payment is:%.2f",totalPayment);
    printf("\nYour tax is: %.2f$",tax);
    printf("\nYour Payment after taxes is: %.2f$",salary);
    

    return 0;

}