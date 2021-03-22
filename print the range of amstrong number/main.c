#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void ams(int);
int main()
{
    int a,b,i;
    printf("enter the first number for check:\n");
    scanf("%d",&a);
    printf("enter the second nubber for check :\n");
    scanf("%d",&b);
    printf("\namstrong number of this range is :\n");
   for(i=a;i<=b;i++)
   {
        ams(i);
   }

    return 0;
}
void ams(int x)
{
     int s=0,rem,mod,sum=0,i;
     mod=x;
    while(mod!=0)
    {
        mod=mod/10;
        s=s+1;
    }
    mod=x;
    for(i=0;i<s;i++)
    {
        rem=mod%10;
        mod=mod/10;
        sum=sum+pow(rem,s);
    }
    if(x==sum)
    {
        printf("\t%d",x);
    }

}
