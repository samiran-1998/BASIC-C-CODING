#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for(a=0;a<50;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
