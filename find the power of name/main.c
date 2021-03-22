#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int len,i,val,val2,val3=0,val4=0,sum,mod,rem,point=0;
    char name[100];
    printf("enter the name\n");
    gets(name);
    len=strlen(name);
   // printf("%d",len);
    for(i=0;i<len;i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
          val=name[i]-64;
          printf("  %d +",val);
          val3=val+val3;
        }
          if(name[i]>='a' && name[i]<='z')
        {
          val2=name[i]-96;
          printf("  %d +",val2);
          val4=val4+val2;
        }
    }
    sum=val4+val3;
   while(sum!=0)
    {
        rem=sum%10;
        sum=sum/10;
        point=point+rem;
        if(sum==0 && point>9)
        {
           sum=point;
           point=0;
        }
    }
     printf("\nvalue is =%d\n",val3);
      printf("value is =%d\n",val4);
      printf("the point is  =%d",point);
    return 0;
}
