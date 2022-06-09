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

    fp =  fopen("studentmarks.dat", "wb");

    while(1)
    {
       fflush(stdin);

       printf("Enter name [end to stop] :");
       gets(s.name);

       if (stricmp(s.name, "end") == 0)
          break;

       printf("Enter marks :");
       scanf("%d",&s.marks);

       fwrite(&s, sizeof(s), 1, fp);
    }

    fclose(fp);
}
