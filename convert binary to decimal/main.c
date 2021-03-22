#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i=0,a=0,des=0;
    char arr[100];
    int x,y=-1;
    printf("enter the binary bit\n");
    scanf("%s",arr);
    while(arr[i]!='\0')
    {
        a=a+1;
        i++;
    }
    for(i=a-1;i>=0;i--)
    {
     x=arr[i]-48;
     y=y+1;
    //printf("%d\n",x);
        des=des+(pow(2,y)*x);
    }
    printf("\n decimal value is : %d",des);
    return 0;
}
