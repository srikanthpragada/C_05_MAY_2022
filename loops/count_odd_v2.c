
#include <stdio.h>

void main()
{
  int start, end, count = 0;

      printf("Enter two numbers : ");
      scanf("%d%d",&start,&end);

      if(start % 2 == 0)
          start ++;

      for( ; start <= end; start +=2)
           count ++;

      printf("%d", count);

}
