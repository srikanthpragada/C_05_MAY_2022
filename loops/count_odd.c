
#include <stdio.h>

void main()
{
  int start, end, count;

      printf("Enter two numbers : ");
      scanf("%d%d",&start,&end);

      if(start % 2 == 0)
          start ++;

      count = (end - start) / 2 + 1;
      printf("%d", count);

}
