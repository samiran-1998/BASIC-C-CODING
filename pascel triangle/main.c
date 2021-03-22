#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,k,no;
    printf("enter the hight of triangle:\n");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
         for(k=0;k<(a-i);k++)
          {
           printf(" ");
          }
          no=1;
        for(j=0;j<=i;j++)
           {

          if (j==0 || i==0)
                no = 1;
            else
                no = no*(i-j+1)/j;
                printf("%d ",no);
            }
             printf("\n");
    }
   // printf("Hello world!\n");
    return 0;
}
