#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char a[100],b[100],s[100],t;
int count=0,i,j,k=0;
scanf("%s",a);
scanf("%s",b);
for(i=0;i<strlen(a);i++)
{
    for(j=0;j<strlen(b);j++)
    {
        if(a[i]==b[j])
        {
            s[k]=a[i];
            k++;
        }
    }
}   
 for(i=0;i<strlen(s);i++)
{
    for(j=i+1;j<strlen(s);j++)
    {
    if(s[i]>s[j])
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
    }
    if(s[i]==s[j])
    {
        s[i]='+';
    }
    }
    if(s[i]!='+')
    {
        count++;
    }
}
/*for(i=0;i<strlen(s);i++)
{
    if(s[i]!='+')
    {
        count++;
    }
}*/
printf("%d",count);

}
