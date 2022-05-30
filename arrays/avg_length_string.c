// Average length of 5 strings

#include <stdio.h>

void main()
{
  char st[50];
  int i, total = 0;

     for(i = 1; i <= 5; i ++)
     {
        printf("Enter a string :");
        gets(st);
        total += strlen(st);
     }

     printf("Average Length = %d", total / 5);
}
