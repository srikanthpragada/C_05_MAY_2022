#include <stdio.h>

void main()
{
  FILE * fp;
  char line[100], *p;
  int lineno = 1;

    fp =  fopen("test.txt", "rt");

    while(1)
    {
        p = fgets(line,100,fp);
        if (p == NULL)  // end of file
            break;
        printf("%3d: %s", lineno,line);
        lineno ++;
    }

    fclose(fp);

}
