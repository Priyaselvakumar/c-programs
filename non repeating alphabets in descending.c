#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//non repeating alphabets 
int main()
{
char a[100],t;
int i,j;
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
    for(j=i+1;j<strlen(a);j++)
    {
        if(a[i]<a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
    for(i=0;i<strlen(a);i++)
    {
   
        if(a[i]==a[i+1])
        {
            a[i]='+';
        }
    
    }
    for(i=0;i<strlen(a);i++)
    {
    
        if(a[i]!='+')
        {
        printf("%c",a[i]);
        }
    }
}
