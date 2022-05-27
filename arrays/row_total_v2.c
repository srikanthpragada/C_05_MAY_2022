// Display row total for each row
#include <stdio.h>

void main()
{
  int a[5][6];
  int i,j;

      srand(time(0));
      for(i=0; i < 5; i ++)
      {
        a[i][5] = 0;
        for(j=0; j < 5; j ++)
        {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
           a[i][5] += a[i][j];
        }
        printf("%5d\n", a[i][5]);
      }
}
