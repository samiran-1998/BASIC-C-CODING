#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,mod,rem,sum=0;
    printf("enter the range number :\n");
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
             mod=i;
        while(sum<=9)
        {
            while(mod!=0)
               {
          rem=mod%10;
          mod=mod/10;
          sum=sum+rem;
                }
                if(sum<=9)
                {
                    break;
                }
           mod=sum;
           sum=0;
        }

     if(sum==1)
     {
         printf("\t%d",i);
     }
     sum=0;

    }

    return 0;
}
