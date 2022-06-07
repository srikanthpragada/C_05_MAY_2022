#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30];

    fp =  fopen("names.txt", "wt");

    if (fp == NULL)  // open failed
    {
        printf("Sorry! File can't be opened!");
        exit(1);
    }

    while(1)
    {
        printf("Enter name [end to stop] :");
        gets(name);
        if (stricmp(name, "end") == 0)
           break;

        fprintf(fp, "%s\n", name);
    }

    fclose(fp);
}
