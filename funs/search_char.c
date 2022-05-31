
int search(char s[50], char c)
{
    int i;

        for(i = 0; s[i] != 0; i ++)
        {
           if (s[i] == c)
                return i; // found and return pos
        }

        return -1; // not found
}


void main()
{
  char s[50] = "How do you do";
  int pos;

     pos = search(s,'D');
     if(pos >= 0)
         printf("Found at %d", pos);
     else
         printf("Not found");

}
