// Display largest string

#include <stdio.h>

void main()
{
  char st[50], ls[50];
  int i;

     strcpy(ls, "");
     for(i = 0; i <= 5; i ++)
     {
        printf("Enter a string :");
        gets(st);

        if (strcmp(st, ls) > 0)
        {
            strcpy(ls, st);
        }
     }

     puts(ls);
}
