// calculating gross salary
#include <stdio.h>
int main()
{
    float basic_salary, hra_percentage, da_percetage, overtime_hours, overtime_pay;
    float hra, da, gross_salary, overtime_salary;
    // input values
    printf("enter the basic salary:");
    scanf("%f", &basic_salary);
    printf("enter the hra percentage:");
    scanf("%f", &hra_percentage);
    printf("enter the da percentage:");
    scanf("%f", &da_percetage);
    printf("enter the overtime hours:");
    scanf("%f", &overtime_hours);
    printf("enter the overtime pay:");
    scanf("%f", &overtime_pay);
    // calculation of componants
    hra = (hra_percentage * basic_salary) / 100;
    da = (da_percetage * basic_salary) / 100;
    overtime_salary = (overtime_hours * overtime_pay);
    gross_salary = basic_salary + hra + da + overtime_salary;
    // all results
    printf("hra amount:%f", hra);
    printf("da amount:%f", da);
    printf("overtime salary:%f", overtime_salary);
    printf("gross salary:%.2f\n", gross_salary);
    return 0;
}