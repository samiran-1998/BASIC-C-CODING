#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,l,a,sum;
    printf("\n enter the no of elements :\n");
    scanf("%d",&a);
    int arr[a];
    printf("enter the %d elements\n",a);
    for(l=0;l<a;l++)
    {
        scanf("%d",&arr[l]);
    }
    printf("\n enter the sum :");
    scanf("%d",&sum);
    for(i=0;i<a-2;i++)
    {
        for(j=i+1;j<a-1;j++)
        {
            for(k=j+1;k<a;k++)
            {
                if(sum==(arr[i]+arr[j]+arr[k]))
                {
                    printf(" %d\t%d\t%d\t\n",arr[i],arr[j],arr[k]);

                }
            }
        }
    }
    return 0;
}
