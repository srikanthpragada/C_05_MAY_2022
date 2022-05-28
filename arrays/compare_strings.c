// Compare strings

#include <stdio.h>

void main()
{
  char st1[50], st2[50];
  int i, mismatch = 0;

     strcpy(st1, "Abc");

     printf("Enter string1 :");
     gets(st1);
     printf("Enter string2 :");
     gets(st2);

     for(i = 0; st1[i] != '\0'; i ++)
     {
        if (st1[i] != st2[i])
        {
            mismatch = 1;
            break;
        }
     }

    if(mismatch)
        printf("Differ");
    else
        printf("Same");
}
