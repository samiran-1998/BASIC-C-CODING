#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=1,a,b,f,c,s=1;
  printf("enter three numbars :\n");
     scanf("%d%d%d",&a,&b,&c);
     while(i<=a)
     {
         if(a%i==0&&b%i==0&&c%i==0)
         {
          f=s;
          s=i;
          i++;
         }
         else{
            i++;
         }
     }
  printf("\n the HCF this number is :%d",s);

    return 0;
}
