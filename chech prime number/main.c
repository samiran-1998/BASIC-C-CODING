#include <stdio.h>
#include <stdlib.h>

void prime(int);
int main()
{
    int num,rem,i,range,count=0;
    printf("enter the value for range \n");
    scanf("%d",&range);
    printf("list of the prime number is\n");
    for(num=1;num<=range;num++)
    {
      prime(num);
    }
    return 0;
}
void prime(int num)
{
    int i,rem,count=0;
    if(num==1)
    {
        //printf("this number is prime\n");
        printf("%d ",num);
    }
    else{
    for(i=1;i<=num;i++)
    {
     rem=num%i;
if(rem==0)
{
   // printf("this number is not prime\n");
    count++;
   // break;
}
    }


    if(count==2)
        {
       // printf("\nthis number is prime");
       printf("%d ",num);
    }
}
}

