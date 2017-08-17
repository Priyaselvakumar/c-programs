#include<stdio.h>

int main()
{
    int i,s=0;
    int t;
    int n;
    scanf("%d",&n);
   
    while(n)
    {
        t=n%10;
        n=n/10;
        if(t%2!=0)
        {
            s=s+t;
        }
       
    }
    printf("%d",s);
    
}



