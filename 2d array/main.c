#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sub[7][4],i,j;
    printf("enter any seven number");
    for(j=0;j<4;j++)
    {
    for(i=0;i<7;i++)
    {
        scanf("%d",&sub[i][j]);
      // total=total+ sub[i];
    }
    printf("\n");
    }
     printf("this matrix is given billow\n");
    for(i=0;i<4;i++)
        {
for(j=0;j<7;j++)
{
printf("\t%d ",sub[i][j]);
    }
     printf("\n");
        }
    return 0;
}
