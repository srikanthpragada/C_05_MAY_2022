#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

    fp =  fopen("story.txt", "wt");

    printf("Enter text :");
    while(1)
    {
        ch = getche();
        if (ch == '.')
            break;

        if (ch == 13) // carriage return
            putch('\n');

        fputc(ch,fp);
    }

    fclose(fp);
}
