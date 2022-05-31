
void reverse(int num)
{
   while(num > 0)
   {
       printf("%d", num % 10);
       num /= 10;
   }
}


void main()
{
   reverse(123);
   printf("\n");
   reverse(4532);

}
