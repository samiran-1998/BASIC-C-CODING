#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum=1,nxt;
    printf("enter the length of series:\n");
    scanf("%d",a);
   int fi=0,fs=1;
    printf("\nthe length of the series is %d",a);
    printf("\n the series is :");
    for(i=0;i<a;i++)
    {
        if(i<=1)
        {
            printf("%d",i);
        }
        else
        {
            nxt=fi+fs;
            fi=fs;
            fs=nxt;
            printf("%d",nxt);
            sum=sum+nxt;
        }
    }
    printf("\n addition of this series is :%d",sum);
    return 0;
}
