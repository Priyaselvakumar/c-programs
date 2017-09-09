#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int i,a[100],l=0,j;
    char s[100],b[100];
    fgets(s,100,stdin);
    strcpy(b,s);
    for(i=0;i<strlen(s);i++)
    {
       for(j=i+1;j<strlen(s);j++)
       {
           if(s[i]=='(')
           {
               if(s[j]==')')
               {
                  s[i]='+';
                  s[j]='+';
               }
           }
       }
        
        
        
    }
    printf("%s",s); //balanced braces are replaced by '+'
    for(i=0;i<strlen(s);i++)//to find the indices of balanced braces
    {
    if(s[i]=='+' || isalpha(s[i])!=0)
    {
        a[l]=i;
        l++;
      
    }
    
    }
    printf("\n");
    for(i=0;i<l;i++)
    {
        printf("%d",a[i]); //indices to be printed
    }
    printf("\n");
    
    for(i=0;i<l;i++)
    {
        for(j=0;j<strlen(s);j++)
        {
            if(j==a[i])
            {
                printf("%c",b[j]); //printing the respective elements of indices
            }
        }
    }
        
}
