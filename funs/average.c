#include <stdio.h>

float average(int, int); // function declaration or prototype declaration

void main()
{
  int a = 10, b = 15;
  float avg;

    avg = average(a,b);
    printf("%f", avg);
}

// Function Definition
float average(int n1, int n2)
{
   return (n1 + n2) / 2.0;
}
