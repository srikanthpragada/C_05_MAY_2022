// Count words

#include <stdio.h>

void main()
{
  char st[50];
  int i, count = 0;

     printf("Enter string :");
     gets(st);

     for(i = 0; st[i] != '\0'; i ++)
     {
         if(isspace(st[i]))
             count ++;
     }

     printf("No. words = %d", count + 1);
}
