void main()
{
  int a[] = {4,3,2,1,5};
  int b[] = {1,3,5,11,56};

   printf("%d \n", issorted(a));
   printf("%d \n", issorted(b));

}


int arrys_are_equal(int a[5], int b[5])
{
    int i;

        for(i = 0; i < 5; i ++)
        {
            if(a[i] != b[i])
                return 0; // false
        }
        return 1;
}

int issorted(int a[5])
{
    int i;

        for(i = 0; i < 4; i ++)
        {
            if(a[i] > a[i + 1])
                return 0; // false
        }
        return 1;
}
