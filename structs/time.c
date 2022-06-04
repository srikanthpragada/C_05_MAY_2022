#include <stdio.h>

struct time
{
  int h,m,s;
};

struct time gettime() {
  struct time t;

     t.h = rand() % 24;
     t.m = rand() % 60;
     t.s = rand() % 60;
     return t;
}

void print(struct time t)
{
    printf("%02d:%02d:%02d\n", t.h, t.m, t.s);
}

int totalseconds(struct time t)
{
   return t.h * 3600 + t.m * 60 + t.s;
}

int compare(struct time t1, struct time t2)
{
    return totalseconds(t1) - totalseconds(t2);
}

void main()
{
  struct time times[10];
  struct time largest = {0,0,0};
  int i;

      srand(time(0));

      for(i = 0; i < 10; i ++)
      {
           times[i] = gettime();
           print(times[i]);
           if (compare(times[i], largest) > 0)
               largest = times[i];

      }

      printf("Largest Time :");
      print(largest);
}
