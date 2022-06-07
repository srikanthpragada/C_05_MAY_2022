#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

    fp =  fopen("alpha.txt", "wt");

    for(ch = 97; ch <= 122 ; ch ++)
        fputc(ch,fp);

    fclose(fp);
}
