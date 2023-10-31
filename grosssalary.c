#include <stdio.h>
int main()
{
   float basic_salary, gross_salary, da, hra, convience;
   printf("Enter basic salary: ");
   scanf("%f", &basic_salary);
    
    if (basic_salary >= 5000)
    {
        da = 0.11 * basic_salary;
        hra = 0.2 * basic_salary;
        convience = 500;
    } else if (basic_salary>=500 && basic_salary<5000){
        da = 0.1 * basic_salary;
        hra = 0.15 * basic_salary;
        convience = 400;
    } else {
        da = 0.09 * basic_salary;
        hra = 0.1 * basic_salary;
        convience = 300;
    }
    gross_salary = basic_salary + da + hra + convience;
    printf("Gross salary: %.2f", gross_salary);
    return 0;
}