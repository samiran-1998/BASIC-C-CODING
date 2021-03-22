#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,s=0,rem,mod,sum=0,i;
    printf("enter the number for check:\n");
    scanf("%d",&a);
    mod=a;
    while(mod!=0)
    {
        mod=mod/10;
        s=s+1;
    }
    mod=a;
    printf("\n%d\n",s);
    for(i=0;i<s;i++)
    {
        rem=mod%10;
        mod=mod/10;
        sum=sum+pow(rem,s);
    }
    if(a==sum)
    {
        printf("\n %d this number is amstrong %d",a,sum);
    }
    else{
        printf("%d this number is not amstrong %d",a,sum);
    }

    return 0;
}
