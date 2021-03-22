#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int i,j,l1,l2,count=0,count1=0;
  char st[100],sb[10];
  printf("enter the string :\n");
  gets(st);
  l1=strlen(st);
  printf("enter the sub string :\n");
  gets(sb);
  l2=strlen(sb);
   st[l1];
  sb[l2];
  for(i=0;i<l1;i++)
  {
      for(j=0;j<l2;j++)
      {
          if(st[i+j]==sb[j])
          {
              count++;
          }
          else {
            break;
          }
      }
      if(count==3)
      {
          count1++;
          count=0;
      }
      else{
        count=0;
      }
  }
  printf("\n %d substring is available",count1);

    return 0;
}
