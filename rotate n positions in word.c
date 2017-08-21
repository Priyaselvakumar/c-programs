#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char a[100],s[100];
    int i,n,k=0,p,len;
    scanf("%s\n%d",a,&n);
    len=strlen(a);
    p=len-n;
    if(n==(len-1))
    {
        printf("%s",a);
    }
    else
    {
    for(i=p;i<len;i++)
    {
        s[k]=a[i];
        k++;
    }
    for(i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
    }
    for(i=0;i<p;i++)
    {
    printf("%c",a[i]);
    }
    }
}
