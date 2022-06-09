#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int marks, count;

    fp =  fopen("marks.dat", "rb");

    while(1)
    {
       count = fread(&marks, sizeof(int), 1, fp);
       if (count == 0)  // EOF
          break;

       printf("%d ", marks);
    }

    fclose(fp);
}
