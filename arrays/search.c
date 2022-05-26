// Linear search in sorted array
#include <stdio.h>

void main()
{
  int a[] = {4,6,8,10,20,30,40,44,55,66};
  int i, found = 0, sn = 25;

      for(i=0; i < 10; i ++)
      {
          if (a[i] == sn)
          {
              printf("%d", i);
              found = 1;
              break;
          }

          if(a[i] > sn)
            break;
      }

      if (!found)
         printf("Not found!");
}
