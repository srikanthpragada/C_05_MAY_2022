// Smallest Factor

#include <stdio.h>

void main()
{
  int num, i;


    printf("Enter a number :");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i ++)
    {
       if(num % i == 0) {
          break;
       }
    }
    if (i > num/2) // prime number so num is smallest factor
        i = num;

    printf("Smallest Factor = %d", i);
}
