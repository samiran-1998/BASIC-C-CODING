#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,j,l,temp,count=0;
    char name[100];
    printf("enter the string :\n");
    gets(name);
    l=strlen(name);
    //printf("%d\n",l);
    //printf("%s\n",name);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(name[j]<name[i])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        if(name[i]==32)
        {
            continue;
        }
       else if(name[i]==name[i+1])
               {
                   continue;
               }
        else
        {
           for(j=0;j<l;j++)
           {

                if(name[i]==name[j])
                {
                    count++;
                }
           }
            printf("%c-->%d\n",name[i],count);
        count=0;
        }

    }
    printf("%s",name);
    return 0;
}
