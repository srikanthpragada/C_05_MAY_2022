#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
  FILE * fp;
  int marks, pos, count, rollno;

    fp =  fopen("marks.dat", "rb");

    while(1)
    {
       printf("Enter rollno [0 to stop] :");
       scanf("%d",&rollno);
       if(rollno == 0)
         break;

       // calculate position
       pos = (rollno - 1) * sizeof(int);
       fseek(fp, pos, SEEK_SET);

       count = fread(&marks, sizeof(int), 1, fp);
       if (count == 0)
         printf("Sorry! Invalid roll number!\n");
       else
        printf("Marks are : %d\n", marks);
    }

    fclose(fp);
}
