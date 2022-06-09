#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int marks, i;

    fp =  fopen("marks.dat", "wb");
    srand(time(0));
    for (i = 1; i <= 10; i ++)
    {
        marks = rand() % 100;
        fwrite(&marks, sizeof(int), 1, fp);
    }

    fclose(fp);
}
