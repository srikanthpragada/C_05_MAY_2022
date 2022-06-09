#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student
{
    char name[30];
    int marks;
};

void main()
{
  FILE * fp;
  struct student s;
  int count;

    fp =  fopen("studentmarks.dat", "rb");

    while(1)
    {
        count = fread(&s, sizeof(s), 1, fp);
        if (count == 0)
            break;

        printf("%-30s %3d\n", s.name, s.marks);
    }

    fclose(fp);
}
