#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,rem,mod,j;
    printf("enter the value\n");
    scanf("%d",&a);
    printf("\n the multiplier of %d is :",a);
    mod=a;
             for(j=2;j<a;j++)
               {
                   rem=mod%j;
                   if(rem==0)
                   {
                       mod=mod/j;
                        printf("\t%d",j);
                        j=j-1;
                   }

              }
    return 0;
}
