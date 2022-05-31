
void print_vertical(char st[100])
{
 int i;

    for(i = 0; st[i] != '\0' ; i ++)
          printf("%c\n", st[i]);
}


void main()
{
  char s[100] = "Hello";

      print_vertical(s);
}
