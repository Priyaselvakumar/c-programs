#include<stdio.h>
int main(int argc,char *argv[])
{
    int a,s[100],i=0,j;
    a=atoi(argv[1]);
    while(a)
    {
        s[i]=a%2;
        a=a/2;
        i++;
    }
    
    for(j=i-1;j>=0;j--)
    {
        printf("%d",s[j]);
    }
  
    
}
