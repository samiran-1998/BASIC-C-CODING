#include <stdio.h>
#include <stdlib.h>
void prime(int);
int main()
{
    int a,b,i;
    printf("enter the value first and second value of range\n");
    scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
       prime(i);
   }
    return 0;
}
void prime(int num)
{
     int rem,i,count=0;
     if(num<=0)
        {
            printf("\n you enter wrong input");
     //exit(0);
        }
        else
        {
    for(i=1;i<=num;i++)
    {
      rem=num%i;
      if(rem==0)
      {
          count++;
      }
    }

    if(count==2)
    {
        printf("\t%d",num);

    }
}

}
