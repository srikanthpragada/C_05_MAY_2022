// Password
#include <stdio.h>

void main()
{
  int upper, digit, special, i;
  char ch;

      upper = digit = special = 0;

      printf("Enter password :");
      for(i=1; i <= 8; i ++)
      {
        ch = getch();
        putch('*');
        if (isupper(ch))
            upper = 1;
        else
          if(isdigit(ch))
              digit = 1;
          else
            if(ch == '#' || ch == '@' || ch == '_')
                special = 1;
      }

      if(upper && digit && special)
         printf("\nValid Password!");
      else
         printf("\nInvalid password!");
}
