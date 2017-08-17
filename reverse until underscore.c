#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char a[1000],b[1000];
    int i=0,count=0,j;
    fgets(a,1000,stdin);
    int len=strlen(a);
    if(a[0]=='_')
    {
        printf("%s",a);
    }
    else
    {
        while(a[i]!='_')
        {
            b[i]=a[i];
            i++;
            count++;
        }
        b[i]='\0';
                
        for(j=strlen(b)-1;j>=0;--j)
        {
            printf("%c",b[j]);
        }
        if(strlen(a)!=strlen(b))
        {
        for(i=count;i<strlen(a);i++)
        {
            printf("%c",a[i]);
        }
        }
    }
    
}
