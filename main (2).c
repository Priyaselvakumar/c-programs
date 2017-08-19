#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    if(strncmp(a,b,1)>0)
    {
        printf("%s%s",b,a);
    }
    else
    {
        printf("%s%s",a,b);
    }
}




