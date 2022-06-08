#include <stdio.h>

void main()
{
  FILE * fp;
  int ch, inspace = 0;

    fp =  fopen("test.txt", "rt");

    while(1)
    {
        ch = fgetc(fp);
        if (ch == EOF)  // end of file
            break;

        if(ch == ' ')
            inspace = 1;
        else
        {   if(inspace)
              putch(' ');

            putch(ch);
            inspace = 0;
        }
    }

    fclose(fp);
}
