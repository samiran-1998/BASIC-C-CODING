#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sub1[3][3],sub2[3][3],add[3][3],i,j;
    printf("enter three no for first matrix number\n");
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
        scanf("%d",&sub1[j][i]);
      // total=total+ sub[i];
    }
    printf("\n");
    }
     printf("enter three no for second matrix number\n");
     for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
        scanf("%d",&sub2[j][i]);
      // total=total+ sub[i];
    }
    printf("\n");
    }
 printf("first matrix is given billow\n");
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
     printf("\t%d",sub1[i][j]);
    }
    printf("\n");
    }
 printf("second matrix is given billow\n");
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
       printf("\t%d",sub2[i][j]);
    }
    printf("\n");
    }
printf("addition matrix is given billow\n");
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
       add[i][j]=sub1[i][j]+sub2[i][j];
       printf("\t%d",add[i][j]);
    }
    printf("\n");
    }

    return 0;
}
