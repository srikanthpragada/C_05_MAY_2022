#include <stdio.h>

void main()
{
  int num,i, total = 0;

      for(i = 1; i <= 5 ;i ++)
      {
         printf("Enter number [0 to stop] : ");
         scanf("%d",&num);

         if(num == 0)
            break;

         total += num;
      }

      printf("%d", total);

}
