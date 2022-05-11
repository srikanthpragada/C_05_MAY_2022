// Swap two numbers

#include <stdio.h>

void main()
{
  int a,b,t;

     printf("Enter two numbers : ");
     scanf("%d%d",&a,&b);

     t = a;
     a = b;
     b = t;
}
