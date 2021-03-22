#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k;
    printf("enter the first value \n");
    scanf("%d",&a);
    printf("enter the second value \n");
    scanf("%d",&b);
    printf("enter the third value \n");
    scanf("%d",&c);
    printf("enter the forth value \n");
    scanf("%d",&d);
    printf("enter the fifth value \n");
    scanf("%d",&e);
    f=(a>b)?a:b;
    g=(c>d)?c:d;

    h=(f>e)?f:e;

    i=(g>h)?g:h;

    printf("\n grater value is %d",i);

    return 0;
}
