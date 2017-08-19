#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=n+1;i<1000;i++)
    {
       for(j=2;j<n+1;j++)
       {
           if(i%j==0)
           {
               flag++;
           }
           
       }
       if(flag==0)
       {
           printf("%d",i);
           break;
       }
       flag=0;
    }


}
