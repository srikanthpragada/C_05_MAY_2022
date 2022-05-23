// Largest Factor

#include <stdio.h>

void main()
{
  int num, i;


    printf("Enter a number :");
    scanf("%d", &num);

    for(i = num/2 ; i >= 1; i --)
    {
       if(num % i == 0) {
          printf("Largest factor = %d", i);
          break;
       }
   }
}
