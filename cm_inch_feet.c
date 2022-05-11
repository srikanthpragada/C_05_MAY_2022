// Convert cm to inches and feet

#include <stdio.h>

void main()
{
  float cm, inches, feet;

     printf("Enter cm : ");
     scanf("%f",&cm);

     inches = cm / 2.54;
     feet = inches / 12;

     printf("%.2f cm = %.2f inches and %.2f feet", cm, inches, feet);
}
