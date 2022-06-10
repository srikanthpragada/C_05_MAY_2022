#include <stdio.h>
#define TEMPFILE "temp.txt"

void main(int argc, char * argv[])
{
  FILE *sfp, *tfp;
  int ch;

    if(argc < 2)
    {
       printf("Usage : Encrypt <filename>\n");
       printf("<filename> is the file to be encrypted!\n");
       exit(3);
    }

    sfp =  fopen(argv[1], "rt");
    if(sfp == NULL)
    {
        printf("Sorry! Could not open [%s] file. Quitting...", argv[1]);
        exit(1);
    }

    tfp =  fopen(TEMPFILE, "wt");
    if(tfp == NULL)
    {
        printf("Sorry! Could not create temporary file. Quitting...");
        exit(2);
    }

    while(1)
    {
      ch = fgetc(sfp);
      if (ch == EOF)
        break;
      fputc(ch + 1, tfp);
    }

    fclose(sfp);
    fclose(tfp);

    remove(argv[1]);  // Remove source file
    rename(TEMPFILE, argv[1]);  // Rename temp as source file
    printf("Encryption Successful!!");
}
