
int total(int a[5])
{
    int i, sum = 0;

        for(i = 0; i < 5; i ++)
            sum += a[i];

        return sum;
}


void main()
{
  int a[] = {4,3,2,1,5};

   printf("%d \n", total(a));

}
