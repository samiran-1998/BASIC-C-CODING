#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j,a=0,b;
    char name[100];
    char temp;
    printf("\n enter the name :\n");
    scanf("%s",name);
     printf("\n the name is :%s\n",name);

      while(name[i]!='\0')
    {
    a=a+1;
    i++;
    }
    printf("reverse string is :\n");
    b=a/2;
   for(i=0,j=a;i<=b,j>=b;i++,j--)
    {
       temp=name[i];
       name[i]=name[j];
       name[j]=temp;

       // printf("%c",name[i]);
       // printf("\n %c the stored address is : %p",name[i],&name[i]);
       // i++;
    }
printf("%s\n\t",name);
    return 0;
}
