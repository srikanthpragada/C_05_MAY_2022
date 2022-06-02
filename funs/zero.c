
void main()
{
  int n = 100;

    zero(&n);
    printf("%d", n);
}

void zero(int * v)
{
   *v = 0;
}
