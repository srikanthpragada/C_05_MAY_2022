// Sum of digits for 5 numbers

#include <stdio.h>

void main()
{
  int i,num, total = 0;

      for(i = 1; i <= 5 ; i ++)
      {
          printf("Enter a number :");
          scanf("%d",&num);

          while(num > 0)
          {
             total += num % 10;
             num /= 10;
          }
      }

      printf("Total of all digits = %d", total);



}
