#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,*ptr,*p,i,sum=0;
    printf("enter the number of elements :\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    p=ptr;
   /* if(ptr==null)
    {
        printf("out of memory spce :\n");
        exit(0);
    } */
    printf("\n enter %d numbers of elements :",n);
    for(i=0;i<n;i++)
    {
     scanf("%d",ptr);
     sum=sum+*ptr;
     ptr++;

    }
    for(i=0;i<n;i++)
    {

        printf("\nelements is : %d and address is : %p",*p,p);
        p++;
    }

    printf("\n addition of tis elements is: %d",sum);
    return 0;
}
