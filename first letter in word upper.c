#include<stdlib.h>
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100][100],t='s';
    int i=0,count=0,j;
    while(t!='\n')
    {
        scanf("%s%c",a[i],&t);
        i++;
        count++;
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<strlen(a[i]);j++)
        {
            if(j==0)
            {
                printf("%c",toupper(a[i][j]));
            }
            else
            {
                printf("%c",a[i][j]);
            }
        }
        printf(" ");
    }

}
