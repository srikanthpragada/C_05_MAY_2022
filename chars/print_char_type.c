// print char type


#include <stdio.h>

void main()
{
 char ch;

     printf("Enter an alphabet :");
     ch = getch();

     if (ch >= 65 && ch <= 90)
          printf("\nUppercase");
     else
          printf("\nLowercase");
}
