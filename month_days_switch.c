// Days in month using switch
#include <stdio.h>
void main()
{
   int month, days;

       printf("Enter month :");
       scanf("%d",&month);

       switch(month)
       {
         case 2 : days = 28;
                  break;
         case 4 :
         case 6 :
         case 9 :
         case 11: days = 30;
                  break;
         default: days = 31;
       }

       printf("Days = %d", days);
}
