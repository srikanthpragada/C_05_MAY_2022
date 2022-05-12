// Calculate Net Salary

#include <stdio.h>

void main()
{
  int salary, hra, da, gross_salary, income_tax, net_salary;

     printf("Enter salary :");
     scanf("%d",&salary);

     hra = salary * 30 / 100;
     da = salary *  20 / 100;

     gross_salary = salary + hra + da;
     income_tax = gross_salary * 5 / 100;
     net_salary = gross_salary - income_tax;

     printf("Basic Salary         %6d\n", salary);
     printf(" + HRA               %6d\n", hra);
     printf(" + DA                %6d\n", da);
     printf("                     ======\n");
     printf("Gross Salary         %6d\n", gross_salary);
     printf(" - Income Tax        %6d\n", income_tax);
     printf("                     ======\n");
     printf("Net Salary           %6d\n", net_salary);

}
