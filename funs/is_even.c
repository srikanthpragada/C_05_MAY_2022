
int iseven(int num)
{
   if (num % 2 == 0)
      return 1; // true
   else
      return 0; // false
}


void main()
{
   printf("%d \n", iseven(10));
   printf("%d \n", iseven(15));
}
