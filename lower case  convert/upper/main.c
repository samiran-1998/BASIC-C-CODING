#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int i=0;
char name[100];
  printf("enter the name or weite something :\n");
     gets(name);
     printf("you write :\n");
      while(name[i]!= '\0')
      {
        if(name[i]>='a' && name[i]<='z' || name[i]>='A' && name[i]<='Z' || name[i]==32)
         {
         i++;
         }
         else
         {
             printf("\n YOU WRITE WRONG SOMETHING :");
             exit(0);
         }
      }
      i=0;
     while(name[i]!= '\0')
        {
        if(name[i]>='a' && name[i]<='z')
        {
            name[i]=name[i]-32;
            printf("%c",name[i]);

        }
        else if(name[i]>='A' && name[i]<='Z')
        {
        name[i]=name[i]+32;
         printf("%c",name[i]);
        }
        else
        {
            printf("%c",name[i]);
        }
      i++;
        }

 return 0;
}
