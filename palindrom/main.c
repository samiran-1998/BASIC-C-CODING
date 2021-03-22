#include <stdio.h>
#include <stdlib.h>

int main()
{
    long num,mod,rem,sum=0;
    printf("enter the value \n");
    scanf("%d",&num);
     mod=num;
    while(mod>=1)
    {


        rem=mod%10;
        sum=sum*10 + rem;
        mod=mod/10;

    }
    printf("\nthe reverse number is :");
    printf("\n\t%d",sum);
    if(sum==num)
    {
        printf("\nthis number is palindrom");

    }
    else{
        printf("\nthis number is not palindrom");
    }
    return 0;
}
