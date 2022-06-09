#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

    fp =  fopen("test.txt", "rt");

    while(1)
    {
        ch = fgetc(fp);
        if (ch == EOF)  // end of file
            break;

        if (isspace(ch))
            putch('\n');
        else
            putch(ch);
    }

    fclose(fp);
}
