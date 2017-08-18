#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j,flag=0,count=0;
    scanf("%d %d",&x,&y);
    
    for(i=x;i<=y;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
            
        }
        if(flag==1)
        {
            count++;
        }
        flag=0;
    }
    printf("%d",count);


}
