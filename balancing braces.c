#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,k=0,j=0;
    char s[100],a[100],b[100];
    fgets(s,100,stdin);
    for(i=0;i<strlen(s);i++)
    {
       for(j=i+1;j<strlen(s);j++)
       {
           if(s[i]=='{')
           {
               if(s[j]=='}')
               {
                   s[i]='+';
                   s[j]='+';
               }
           }
       }
        
        
        
    }
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]!='+')
        {
    printf("%c",s[i]);
        }
    
    }

}
