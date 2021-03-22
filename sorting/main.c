#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp;
    int arr[10]={99,88,77,66,55,44,33,22,11,07};
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[j]<arr[i])
                temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    printf("the shorting matrix is\n");
    for(i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}
