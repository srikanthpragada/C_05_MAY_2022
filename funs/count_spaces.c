
int count_spaces(char s[50])
{
    int i, count = 0;

        for(i = 0; s[i] != 0; i ++)
        {
           if (s[i] == ' ')
                count ++;
        }

        return count;
}


void main()
{
  char s[50] = "Welcome";

    printf("Count = %d", count_spaces(s));

}
