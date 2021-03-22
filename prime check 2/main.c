#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,mod,rem,i,count=0;
    printf("Enter the value: \n");
    scanf("%d",&num);
    if(num==0){
        printf("wrong input");
    }
  else{

    for(i=2;i<num;i++)
    {
rem=num%i;
if(rem==0)
{

     break;
}
    }

    if(i== num)
    {
        printf("\nthis number is prime.");
    }
    else
        printf("\nthis number is not prime.");
        }
    return 0;
}
