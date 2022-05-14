// Days in month
#include <stdio.h>
void main()
{
   int month, days;

       printf("Enter month :");
       scanf("%d",&month);

       if(month == 2)
          days = 28;
       else
         if(month == 4 || month == 6 || month == 9 || month == 11)
             days = 30;
         else
            days = 31;

       printf("Days = %d", days);
}
