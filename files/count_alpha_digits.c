#include <stdio.h>

void main()
{
  FILE * fp;
  int ch, alpha = 0, digit = 0;

    fp =  fopen("test.txt", "rt");

    while(1)
    {
        ch = fgetc(fp);
        if (ch == EOF)  // end of file
            break;

       if(isalpha(ch))
         alpha ++;
       else
        if(isdigit(ch))
          digit ++;
    }

    fclose(fp);
    printf("Alpha = %d, Digits = %d", alpha, digit);
}
