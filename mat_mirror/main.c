#include <stdio.h>
#include <stdlib.h>
int R,C;

int main()
{
    int a,b,i,j,k,l;
    printf("enter the row length of matrix\n");
    scanf("%d",&a);
    printf("enter the collum length of matrix\n");
    scanf("%d",&b);
    R=a;
    C=b;
    int mat[a][b],mat1[a][b],add1[a][b];
    printf("enter the value for matrix\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }
     printf("the matrix is\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("\t%d",mat[i][j]);
        }
        printf("\n");
    }
    b=b-1;
     printf("the mirror matrix is\n");

    for(i=0,k=0;i<a;i++,k++)
    {
        for(j=b,l=0;j>=0;j--,l++)
        {
           mat1[k][l] = mat[i][j];
        }
    }
        for(i=0;i<a;i++)
    {
        for(j=0;j<=b;j++)
        {
            printf("\t%d",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n addition matrix is\n");
  for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
        add1[i][j]=mat1[i][j]+mat[i][j];
        printf("\t%d",add1[i][j]);
        }
        printf("\n");
    }


    return 0;

}
