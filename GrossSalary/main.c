#include <stdio.h>

int main()
{
    float basicSalary,dearnessAllowance,house_rent_allowance,grossSalary;

    printf("Enter the basic salary:");
    scanf("%f\n",&basicSalary);

    dearnessAllowance=  0.40*basicSalary;
    house_rent_allowance=0.20*basicSalary;

    grossSalary=basicSalary+dearnessAllowance+house_rent_allowance;

    printf("Ramesh's gross Salary: %.2f\n",grossSalary);

    return 0;

}
