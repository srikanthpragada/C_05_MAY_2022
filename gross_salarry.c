// Gross salary
#include <stdio.h>
void main()
{
   int salary, grade, hra, da, ta, gross;

       printf("Enter salary and grade[1/2] :");
       scanf("%d%d",&salary, &grade);
       if(grade == 1)
       {
           hra = salary * 30 / 100;
           da = salary * 25 / 100;
       }
       else
       {
           hra = salary * 25 / 100;
           da = salary * 20 / 100;
       }

       ta = salary * 5 / 100;
       gross = salary + hra + da + ta;
       printf("Gross Salary = %d", gross);
}
