#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,k=0;
    printf("enter the hight of triangle:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            k=k+1;
            printf("\t%d",k);
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
