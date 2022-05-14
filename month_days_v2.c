// Days in month
#include <stdio.h>
void main()
{
   int month, year, days;

       printf("Enter month :");
       scanf("%d",&month);

       if(month == 2)
       {
         printf("Enter year :");
         scanf("%d",&year);

         if(year % 4 == 0 && year % 100 != 0  || year % 400 == 0)
            days = 29;
         else
            days = 28;
       }
       else
         if(month == 4 || month == 6 || month == 9 || month == 11)
             days = 30;
         else
            days = 31;

       printf("Days = %d", days);
}
